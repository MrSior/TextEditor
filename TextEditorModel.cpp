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
    //std::ifstream input ("/Users/simonchubenko/Documents/C++/TextEditor/Saves/" + fileName + ".txt");
    std::ifstream input("./Saves/" + fileName + ".txt");
    if (!input.is_open()) {
        std::cout << "ERROR: file with name " + fileName + " can't be open" << std::endl;
        return;
    }
    std::string line;
    linesText.clear();
    while (std::getline(input, line)) {
        linesText.push_back(line);
    }
    input.close();
    file_name = fileName;
    current_cursor_position = 0;
    current_line = 0;
}

void TextEditorModel::SaveCurrentText(std::string name) {
    if (file_name.empty()) {
        std::ofstream output;
        //output.open("/Users/simonchubenko/Documents/C++/TextEditor/Saves/NamesOfSavedFiles.txt", std::ios_base::app);
        output.open("./Saves/NamesOfSavedFiles.txt", std::ios_base::app);
        output << name << std::endl;
        output.close();
    }
    file_name = name;
    std::ofstream output;
    //output.open("/Users/simonchubenko/Documents/C++/TextEditor/Saves/" + name + ".txt", std::ios_base::trunc);
    output.open("./Saves/" + name + ".txt", std::ios_base::trunc);
    for (const std::string &line : linesText) {
        output << line << std::endl;
    }
    output.close();
}

void TextEditorModel::EraseLine(int n) {
    if (n >= getLineCount()) return;
    linesText.erase(linesText.begin() + n);
    if (n <= current_line) {
        setCurrentLine(getCurrentLine() - 1);
    }
    if (getLineCount() == 0) {
        InsertLine(0, "");
        setCurrentCursorPosition(0);
    }
}

void TextEditorModel::InsertLine(int pos, std::string line) {
    if (pos <= getLineCount()) {
        if (pos < current_line) {
            setCurrentLine(getCurrentLine() + 1);
        }
        linesText.insert(linesText.begin() + pos, line);
    }
}

void TextEditorModel::setCurrentLine(int currentLine) {
    if (currentLine < 0) return;
    if (currentLine >= 0 && currentLine < linesText.size()) {
        current_line = currentLine;
        if (current_cursor_position > linesText[currentLine].length()) {
            current_cursor_position = linesText[currentLine].length();
        }
    } else {
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
    if (current_cursor_position == max_symbols_in_line) {
        current_line++;
        current_cursor_position = 0;
        if (current_line == linesText.size()) {
            linesText.emplace_back("");
        }
    }
    checkProtrudingPart();
}

void TextEditorModel::eraseSymbol() {
    if (current_cursor_position == 0 && current_line > 0) {
        if (linesText[current_line - 1].length() == max_symbols_in_line) {
            linesText[current_line - 1].pop_back();
        }
        current_cursor_position = linesText[current_line - 1].length();
        if (linesText[current_line - 1].length() == max_symbols_in_line) {
            current_cursor_position--;
        }
        linesText[current_line - 1] += linesText[current_line];
        linesText.erase(linesText.begin() + current_line);
        current_line--;
        checkProtrudingPart();
    } else if (current_cursor_position != 0) {
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
    //current_cursor_position = substr.line();
    current_cursor_position = 0;
}

void TextEditorModel::setCurrentCursorPosition(int pos) {
    if (pos > linesText[current_line].length() + 1 && pos > current_cursor_position) {
        current_cursor_position = linesText[current_line].length();
    } else if ((linesText[current_line].length() == max_symbols_in_line
                && linesText[current_line].length() - current_cursor_position < 2
                && pos - 1 == current_cursor_position) || (pos == linesText[current_line].length() + 1)) {
        if (current_line != linesText.size() - 1) {
            current_line++;
            current_cursor_position = 0;
        }
    } else if (pos + 1 == current_cursor_position && current_cursor_position == 0 && current_line > 0) {
        current_line--;
        current_cursor_position = linesText[current_line].length() - 1;
        if (current_cursor_position < 0) {
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
    for (int i = 0; i < linesText.size(); i++) {
        std::string &line = linesText[i];
        if (i == n - 1 && line.length() > max_symbols_in_line) {
            linesText.emplace_back("");
        }
        while (line.length() > max_symbols_in_line) {
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
    if (isWindowSmaller) {
        //TextEditorModel::checkProtrudingPart();
        int n = linesText.size();
        for (int i = 0; i < linesText.size(); i++) {
            std::string &line = linesText[i];
            if (i == n - 1 && line.length() > max_symbols_in_line) {
                linesText.emplace_back("");
            } else if (line.length() > max_symbols_in_line && linesText[i + 1].length() < max_symbols_in_line) {
                linesText.insert(linesText.begin() + i + 1, "");
                //linesText.emplace_back("");
            }
            while (line.length() > max_symbols_in_line) {
                char symbol = line[line.length() - 1];
                linesText[i].pop_back();
                linesText[i + 1].insert(linesText[i + 1].begin(), symbol);
            }
        }
        TextEditorModel::checkProtrudingPart();
    } else {
        for (int i = 1; i < linesText.size(); i++) {
            if (linesText[i - 1].length() == prev_max_symbols_in_line) {
                linesText[i - 1] += linesText[i];
                if (linesText[i - 1].length() < max_symbols_in_line) {
                    TextEditorModel::EraseLine(i);
                } else {
                    linesText[i] = "";
                }
                TextEditorModel::checkProtrudingPart();
            }
        }
    }
    setCurrentCursorPosition(0);
    if (current_line >= linesText.size()) {
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

void TextEditorModel::collapseBrackets(int line) {
    if (line < 0 || line >= linesText.size()) return;
    std::string &str = linesText[line];
    bool isBracketFound = false;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '{') {
            isBracketFound = true;
            if (line == current_line && current_cursor_position >= i) {
                current_cursor_position--;
            }
            str.erase(str.begin() + i);
            i--;
        } else if (str[i] == '}') {
            isBracketFound = false;
            if (line == current_line && current_cursor_position >= i) {
                current_cursor_position--;
            }
            str.erase(str.begin() + i);
            i--;
        } else if (isBracketFound) {
            if (line == current_line && current_cursor_position >= i) {
                current_cursor_position--;
            }
            str.erase(str.begin() + i);
            i--;
        }
    }
}

void TextEditorModel::contextualReplacement(std::string fromString, std::string toString) {
    for (std::string &line : linesText) {
        for (int i = 0; i < int(line.length()) - int(fromString.length()) + 1; ++i) {
            std::string str1 = line.substr(i, fromString.length());
            if (str1 == fromString) {
                line.erase(i, fromString.length());
                line.insert(i, toString);
                if (toString.length() > fromString.length()) {
                    i += toString.length() - fromString.length();
                } else {
                    i -= fromString.length() - toString.length();
                }
            }
            setCurrentCursorPosition(0);
            checkProtrudingPart();
        }
    }
    checkProtrudingPart();
}

void TextEditorModel::insertSubstrAtLineAtPos(std::string substr, int line_number, int pos) {
    if (linesText.size() <= line_number || pos > linesText[line_number].length()) {
        return;
    }
    linesText[line_number].insert(pos, substr);
    if (line_number == current_cursor_position) {
        setCurrentCursorPosition(0);
    }
    checkProtrudingPart();
    checkProtrudingPart();
}

void TextEditorModel::ChangeSymbol(int line, int pos, char value) {
    if (line >= linesText.size()) {
        return;
    }
    if (linesText[line].length() <= pos) {
        return;
    }
    linesText[line][pos] = value;
}

void TextEditorModel::EraseZeroes() {
    for (int j = 0; j < linesText.size(); ++j) {
        std::string &line = linesText[j];
        line.push_back('#');
        bool isZeroes = false;
        int start_index;
        int end_index;
        for (int i = 0; i < line.length(); ++i) {
            if (line[i] == '0'){
                if (!isZeroes && i >= 1 && line[i - 1] != '0' && isdigit(line[i - 1])){
                    while (i < line.length() && line[i] == '0'){
                        i++;
                    }
                } else {
                    if (!isZeroes) {
                        isZeroes = true;
                        start_index = i;
                        end_index = i;
                    } else {
                        end_index++;
                    }
                }
            } else if (isdigit(line[i]) && isZeroes){
                end_index++;
                int length = end_index - start_index;
                line.erase(start_index, length);
                i -= length;
                isZeroes = false;
            } else if (isZeroes){
                int length = end_index - start_index;
                line.erase(start_index, length);
                i -= length;
                isZeroes = false;
            }
        }
        line.pop_back();
        if (j == getCurrentLine()) {
            setCurrentCursorPosition(0);
        }
    }
}

void TextEditorModel::EraseNonIncreasingSequence() {
    for (int j = 0; j < linesText.size(); ++j) {
        std::string &line = linesText[j];
        char prevSymbol = '#';
        int startIndex;
        for (int i = 0; i < line.length(); ++i) {
            if (isdigit(line[i])) {
                if (prevSymbol == '#') {
                    prevSymbol = line[i];
                    startIndex = i;
                } else {
                    if (line[i] <= prevSymbol) {
                        while (i >= startIndex){
                            line.erase(i, 1);
                            i--;
                        }
                        while (i < line.length() && isdigit(line[i])){
                            line.erase(i, 1);
                        }
                        prevSymbol = '#';
                    } else {
                        prevSymbol = line[i];
                    }
                }
            } else{
                prevSymbol = '#';
            }
        }
        if (j == getCurrentLine()) {
            setCurrentCursorPosition(0);
        }
    }
}

void TextEditorModel::EraseStars() {
    std::string str = "**";
    std::string str_to_insert = "+";
    for (int i = 0; i < linesText.size(); ++i) {
        std::string& line = linesText[i];
        bool is_substr = false;
        int start_index, end_index;
        for (int j = 0; j < line.length(); ++j) {
            if (j < line.length() - 1 && line[j] == '*' && line[j + 1] == '*'){
                if (!is_substr){
                    is_substr = true;
                    start_index = j;
                    end_index = j;
                    continue;
                }
            }
            if (is_substr && line[j] == '*'){
                end_index++;
            } else if (line[j] != '*' && is_substr){
                line.erase(start_index, end_index - start_index + 1);
                j -= end_index - start_index + 1;
                str_to_insert.clear();
                for (int k = 0; k < (end_index - start_index + 1) / 2; ++k) {
                    str_to_insert.push_back('+');
                }
                line.insert(start_index, str_to_insert);
                is_substr = false;
            }
        }
        if (is_substr){
            line.erase(start_index, end_index - start_index + 1);
            str_to_insert.clear();
            for (int k = 0; k < (end_index - start_index + 1) / 2; ++k) {
                str_to_insert.push_back('+');
            }
            line.insert(start_index, str_to_insert);
        }
        if(i == getCurrentLine()){
            setCurrentCursorPosition(0);
        }
    }
}
