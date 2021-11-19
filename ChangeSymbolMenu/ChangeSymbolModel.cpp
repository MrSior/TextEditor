//
// Created by Семён Чубенко on 19.11.2021.
//

#include "ChangeSymbolModel.h"

ChangeSymbolModel::ChangeSymbolModel(){
    init();
}

void ChangeSymbolModel::init() {
    line_n_pos.emplace_back("");
    line_n_pos.emplace_back("");
    line_n_pos.emplace_back("");
    current_cursor_pos = 0;
    current_line = 0;
    max_symbols_in_line = 30;
    is_insert = false;
}

void ChangeSymbolModel::insertSymbol(char symbol) {
    if (line_n_pos[current_line].length() < max_symbols_in_line) {
        line_n_pos[current_line].insert(line_n_pos[current_line].begin() + current_cursor_pos, symbol);
        setCurrentCursorPosition(getCurrentCursorPosition() + 1);
    }
}

void ChangeSymbolModel::eraseSymbol() {
    if (!line_n_pos[current_line].empty()) {
        line_n_pos[current_line].erase(line_n_pos[current_line].begin() + current_cursor_pos - 1);
        setCurrentCursorPosition(getCurrentCursorPosition() - 1);
    }
}

void ChangeSymbolModel::setCurrentCursorPosition(int pos) {
    if (pos >= 0 && pos <= line_n_pos[current_line].length()){
        current_cursor_pos = pos;
    } else if (pos >= 0 && pos > line_n_pos[current_line].length()){
        current_cursor_pos = line_n_pos[current_line].length();
    }
}

void ChangeSymbolModel::setCurrentLine(int pos) {
    if (pos >= 0 && pos <= 2){
        current_line = pos;
        setCurrentCursorPosition(current_cursor_pos);
    }
}

int ChangeSymbolModel::getCurrentCursorPosition() {
    return current_cursor_pos;
}

int ChangeSymbolModel::getCurrentLine() {
    return current_line;
}

std::string ChangeSymbolModel::getStringToInsert() {
    return line_n_pos[0];
}

int ChangeSymbolModel::getPosToInsert() {
    if (!line_n_pos[2].empty()) {
        return std::stoi(line_n_pos[2]);
    }
    return 1;
}

std::string ChangeSymbolModel::getPosToInsertString() {
    return line_n_pos[2];
}

std::string ChangeSymbolModel::getNInsertString() {
    return line_n_pos[1];
}

int ChangeSymbolModel::getNInsert() {
    return std::stoi(line_n_pos[1]);
}

bool ChangeSymbolModel::getIsInsert() {
    return is_insert;
}

void ChangeSymbolModel::setIsInsert(bool isInsert) {
    is_insert = isInsert;
}