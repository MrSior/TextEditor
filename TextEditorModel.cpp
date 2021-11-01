//
// Created by Семён Чубенко on 25.10.2021.
//

#include "TextEditorModel.h"
#include "boost/filesystem.hpp"
#include "fstream"
#include "iostream"

TextEditorModel::TextEditorModel() {
    Init();
}

void TextEditorModel::Init() {
    current_line = 0;
    current_cursor_position = 0;
    max_symbols_in_line = 47;
    linesText.clear();
    linesText.emplace_back("");
    file_name = "";
}

void TextEditorModel::DownloadSaveWithName(std::string fileName) {
    std::ifstream input ("/Users/simonchubenko/Documents/C++/TextEditor/Saves/" + fileName + ".txt");
    if (!input.is_open()){
        std::cout << "ERROR: file with name " + fileName + " can't be open" << std::endl;
        return;
    }
    std::string line;
    linesText.clear();
    while (std::getline(input, line)){
        linesText.push_back(line);
    }
    input.close();
    file_name = fileName;
    current_cursor_position = 0;
    current_line = 0;
}

void TextEditorModel::SaveCurrentText(std::string name) {
    if (file_name.empty()) {
        std::ofstream output2;
        output2.open("/Users/simonchubenko/Documents/C++/TextEditor/Saves/NamesOfSavedFiles.txt", std::ios_base::app);
        output2 << name << std::endl;
        output2.close();
    }
    file_name = name;
    std::ofstream output;
    output.open("/Users/simonchubenko/Documents/C++/TextEditor/Saves/" + name + ".txt", std::ios_base::trunc);
    for(const std::string& line : linesText){
        output << line << std::endl;
    }
    output.close();
}

void TextEditorModel::EraseLine(int n) {
    linesText.erase(linesText.begin() + n);
}

void TextEditorModel::InsertLine(int pos, std::string line) {
    linesText.insert(linesText.begin() + pos, line);
}

void TextEditorModel::setCurrentLine(int currentLine) {
    if (currentLine < 0) return;
    if(currentLine >= 0 && currentLine < linesText.size()) {
        current_line = currentLine;
        if(current_cursor_position > linesText[currentLine].length()){
            current_cursor_position = linesText[currentLine].length();
        }
    } else{
        current_line = linesText.size() - 1;
        current_cursor_position = linesText[currentLine].length();
    }
}

int TextEditorModel::getCurrentLine() {
    return current_line;
}

std::string TextEditorModel::getLine(int n) {
    return linesText[n];
}

int TextEditorModel::getLineCount() {
    return linesText.size();
}

void TextEditorModel::insertSymbol(char symbol) {
    linesText[current_line].insert(linesText[current_line].begin() + current_cursor_position, symbol);
    current_cursor_position++;
    if (current_cursor_position == max_symbols_in_line){
        current_line++;
        current_cursor_position = 0;
        if (current_line == linesText.size()) {
            linesText.emplace_back("");
        }
    }
    checkProtrudingPart();
}

void TextEditorModel::eraseSymbol() {
    if (current_cursor_position == 0 && current_line > 0){
        if(linesText[current_line - 1].length() == max_symbols_in_line){
            linesText[current_line - 1].pop_back();
        }
        current_cursor_position = linesText[current_line - 1].length();
        if (linesText[current_line - 1].length() == max_symbols_in_line){
            current_cursor_position--;
        }
        linesText[current_line - 1] += linesText[current_line];
        linesText.erase(linesText.begin() + current_line);
        current_line--;
        checkProtrudingPart();
    } else if (current_cursor_position != 0){
        linesText[current_line].erase(linesText[current_line].begin() + current_cursor_position - 1);
        current_cursor_position--;
    }
}

void TextEditorModel::lineBreak() {
    std::string substr;
    substr = linesText[current_line].substr(current_cursor_position,
                                            linesText[current_line].length() - current_cursor_position + 1);
    linesText[current_line].erase(current_cursor_position,
                                   linesText[current_line].length() - current_cursor_position + 1);
    InsertLine(current_line + 1, substr);
    current_line++;
    //current_cursor_position = substr.length();
    current_cursor_position = 0;
}

void TextEditorModel::setCurrentCursorPosition(int pos) {
    if (pos > linesText[current_line].length() + 1 && pos > current_cursor_position){
        current_cursor_position = linesText[current_line].length();
    }
    else if ((linesText[current_line].length() == max_symbols_in_line
        &&  linesText[current_line].length() - current_cursor_position < 2
        && pos - 1 == current_cursor_position) || (pos == linesText[current_line].length() + 1)){
        if (current_line != linesText.size() - 1) {
            current_line++;
            current_cursor_position = 0;
        }
    } else if (pos + 1 == current_cursor_position && current_cursor_position == 0 && current_line > 0){
        current_line--;
        current_cursor_position = linesText[current_line].length() - 1;
        if(current_cursor_position < 0){
            current_cursor_position = 0;
        }
    } else if (pos >= 0 && pos <= linesText[current_line].length()) {
        current_cursor_position = pos;
    }
}

int TextEditorModel::getCurrentCursorPosition() {
    return current_cursor_position;
}

void TextEditorModel::checkProtrudingPart() {
    int n = linesText.size();
    for(int i = 0; i < linesText.size(); i++){
        std::string& line = linesText[i];
        if (i == n - 1 && line.length() > max_symbols_in_line){
            linesText.emplace_back("");
        }
        while (line.length() > max_symbols_in_line){
            char symbol = line[line.length() - 1];
            linesText[i].pop_back();
            linesText[i + 1].insert(linesText[i + 1].begin(), symbol);
        }
    }
}

void TextEditorModel::changeMaxSymbolsInLine(int width) {
    max_symbols_in_line = (width - 60) / 22;
}

void TextEditorModel::resetLines(bool isWindowSmaller, int prev_max_symbols_in_line) {
    if (isWindowSmaller){
        //TextEditorModel::checkProtrudingPart();
        int n = linesText.size();
        for(int i = 0; i < linesText.size(); i++){
            std::string& line = linesText[i];
            if (i == n - 1 && line.length() > max_symbols_in_line){
                linesText.emplace_back("");
            }
            else if (line.length() > max_symbols_in_line && linesText[i + 1].length() < max_symbols_in_line){
                linesText.insert(linesText.begin() + i + 1, "");
                //linesText.emplace_back("");
            }
            while (line.length() > max_symbols_in_line){
                char symbol = line[line.length() - 1];
                linesText[i].pop_back();
                linesText[i + 1].insert(linesText[i + 1].begin(), symbol);
            }
        }
        TextEditorModel::checkProtrudingPart();
    } else{
        for(int i = 1; i < linesText.size(); i++){
            if (linesText[i - 1].length() == prev_max_symbols_in_line){
                linesText[i - 1] += linesText[i];
                if (linesText[i - 1].length() < max_symbols_in_line){
                    TextEditorModel::EraseLine(i);
                } else{
                    linesText[i] = "";
                }
                TextEditorModel::checkProtrudingPart();
            }
        }
    }
    TextEditorModel::setCurrentCursorPosition(0);
    if (current_line >= linesText.size()){
        current_line = linesText.size() - 1;
    }
    TextEditorModel::checkProtrudingPart();
}

int TextEditorModel::getMaxSymbolsInLine() {
    return max_symbols_in_line;
}

std::string TextEditorModel::getFileName() {
    return file_name;
}


