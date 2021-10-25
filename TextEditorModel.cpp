//
// Created by Семён Чубенко on 25.10.2021.
//

#include "TextEditorModel.h"
#include "boost/filesystem.hpp"
#include "fstream"
#include "iostream"

TextEditorModel::TextEditorModel() {
    init();
}

void TextEditorModel::init() {
    current_line = 0;
    current_cursor_position = 0;
    max_symbols_in_line = 70;
}

void TextEditorModel::DownloadSaveWithName(std::string fileName) {
    std::ifstream input ("Saves/" + fileName + ".txt");
    if (!input.is_open()){
        std::cout << "ERROR: file with name " + fileName + " can't be open" << std::endl;
    }
    std::string line;
    while (std::getline(input, line)){
        linesText.push_back(line);
    }
    input.close();
}

void TextEditorModel::SaveCurrentText(std::string name) {
    std::filesystem::path path("Saves/");
    path /= name + "/.txt";
    std::filesystem::create_directories(path.parent_path());

    std::ofstream output(path);
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
    current_line = currentLine;
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
    if (linesText[current_line].length() == max_symbols_in_line){
        current_line++;
        current_cursor_position = 0;
        if (current_line == linesText.size()){
            linesText.emplace_back("");
        }
    }
    linesText[current_line].insert(linesText[current_line].begin() + current_cursor_position, symbol);
    current_cursor_position++;
}

void TextEditorModel::eraseSymbol() {
    if (current_cursor_position == 0 && current_line > 0){
        current_line--;
        linesText[current_line].erase(linesText[current_line].begin() + current_cursor_position - 1);
        current_cursor_position--;
    } else if (current_cursor_position != 0){
        linesText[current_line].erase(linesText[current_line].begin() + current_cursor_position - 1);
        current_cursor_position--;
    }
}

void TextEditorModel::lineBreak() {
    std::string substr;
    substr = linesText[current_line].substr(current_cursor_position,
                                            linesText[current_line].length() - current_cursor_position + 1);
    InsertLine(current_line + 1, substr);
    current_line++;
    current_cursor_position = 0;
}

void TextEditorModel::changeCursorPosition(int pos) {
    current_cursor_position = pos;
}

int TextEditorModel::getCurrentCurosrPosition() {
    return current_cursor_position;
}


