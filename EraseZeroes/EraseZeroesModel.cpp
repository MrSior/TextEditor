//
// Created by Семён Чубенко on 02.12.2021.
//

#include "EraseZeroesModel.h"

EraseZeroesModel::EraseZeroesModel(){
    init();
}

void EraseZeroesModel::init() {
    InsertingStringAndItPos.emplace_back("");
    InsertingStringAndItPos.emplace_back("");
    current_cursor_pos = 0;
    current_line = 0;
    max_symbols_in_line = 30;
    is_insert = false;
}

void EraseZeroesModel::insertSymbol(char symbol) {
    if (InsertingStringAndItPos[current_line].length() < max_symbols_in_line) {
        InsertingStringAndItPos[current_line].insert(InsertingStringAndItPos[current_line].begin() + current_cursor_pos, symbol);
        setCurrentCursorPosition(getCurrentCursorPosition() + 1);
    }
}

void EraseZeroesModel::eraseSymbol() {
    if (!InsertingStringAndItPos[current_line].empty()) {
        InsertingStringAndItPos[current_line].erase(InsertingStringAndItPos[current_line].begin() + current_cursor_pos - 1);
        setCurrentCursorPosition(getCurrentCursorPosition() - 1);
    }
}

void EraseZeroesModel::setCurrentCursorPosition(int pos) {
    if (pos >= 0 && pos <= InsertingStringAndItPos[current_line].length()){
        current_cursor_pos = pos;
    } else if (pos >= 0 && pos > InsertingStringAndItPos[current_line].length()){
        current_cursor_pos = InsertingStringAndItPos[current_line].length();
    }
}

void EraseZeroesModel::setCurrentLine(int pos) {
    if (pos >= 0 && pos <= 1){
        current_line = pos;
        setCurrentCursorPosition(current_cursor_pos);
    }
}

int EraseZeroesModel::getCurrentCursorPosition() {
    return current_cursor_pos;
}

int EraseZeroesModel::getCurrentLine() {
    return current_line;
}

std::string EraseZeroesModel::getStringToInsert() {
    return InsertingStringAndItPos[0];
}

int EraseZeroesModel::getLastLine() {
    if (!InsertingStringAndItPos[1].empty()) {
        return std::stoi(InsertingStringAndItPos[1]);
    }
    return 1;
}

std::string EraseZeroesModel::getPosToInsertString() {
    return InsertingStringAndItPos[1];
}

void EraseZeroesModel::setIsInsert(bool isInsert) {
    is_insert = isInsert;
}

bool EraseZeroesModel::getIsInsert() {
    return is_insert;
}

int EraseZeroesModel::getStartLine() {
    if (!InsertingStringAndItPos[0].empty()) {
        return std::stoi(InsertingStringAndItPos[0]);
    }
}
