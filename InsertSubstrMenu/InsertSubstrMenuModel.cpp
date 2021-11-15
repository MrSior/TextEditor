//
// Created by Семён Чубенко on 15.11.2021.
//

#include "InsertSubstrMenuModel.h"

InsertSubstrMenuModel::InsertSubstrMenuModel(){
    init();
}

void InsertSubstrMenuModel::init() {
    line_n_pos.emplace_back("");
    line_n_pos.emplace_back("");
    line_n_pos.emplace_back("");
    current_cursor_pos = 0;
    current_line = 0;
    max_symbols_in_line = 30;
    is_insert = false;
}

void InsertSubstrMenuModel::insertSymbol(char symbol) {
    if (line_n_pos[current_line].length() < max_symbols_in_line) {
        line_n_pos[current_line].insert(line_n_pos[current_line].begin() + current_cursor_pos, symbol);
        setCurrentCursorPosition(getCurrentCursorPosition() + 1);
    }
}

void InsertSubstrMenuModel::eraseSymbol() {
    if (!line_n_pos[current_line].empty()) {
        line_n_pos[current_line].erase(line_n_pos[current_line].begin() + current_cursor_pos - 1);
        setCurrentCursorPosition(getCurrentCursorPosition() - 1);
    }
}

void InsertSubstrMenuModel::setCurrentCursorPosition(int pos) {
    if (pos >= 0 && pos <= line_n_pos[current_line].length()){
        current_cursor_pos = pos;
    } else if (pos >= 0 && pos > line_n_pos[current_line].length()){
        current_cursor_pos = line_n_pos[current_line].length();
    }
}

void InsertSubstrMenuModel::setCurrentLine(int pos) {
    if (pos >= 0 && pos <= 2){
        current_line = pos;
        setCurrentCursorPosition(current_cursor_pos);
    }
}

int InsertSubstrMenuModel::getCurrentCursorPosition() {
    return current_cursor_pos;
}

int InsertSubstrMenuModel::getCurrentLine() {
    return current_line;
}

std::string InsertSubstrMenuModel::getStringToInsert() {
    return line_n_pos[0];
}

int InsertSubstrMenuModel::getPosToInsert() {
    if (!line_n_pos[2].empty()) {
        return std::stoi(line_n_pos[2]);
    }
    return 1;
}

std::string InsertSubstrMenuModel::getPosToInsertString() {
    return line_n_pos[2];
}

std::string InsertSubstrMenuModel::getNInsertString() {
    return line_n_pos[1];
}

int InsertSubstrMenuModel::getNInsert() {
    return std::stoi(line_n_pos[1]);
}

bool InsertSubstrMenuModel::getIsInsert() {
    return is_insert;
}

void InsertSubstrMenuModel::setIsInsert(bool isInsert) {
    is_insert = isInsert;
}