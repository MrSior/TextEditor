//
// Created by Семён Чубенко on 12.11.2021.
//

#include "EraseLineMenuModel.h"

EraseLineMenuModel::EraseLineMenuModel() {
    Init();
}

void EraseLineMenuModel::Init() {
    line_position = "";
    max_symbols_in_name = 30;
    current_cursor_position = 0;
    is_erase = false;
}

void EraseLineMenuModel::insertSymbol(char symbol) {
    if (line_position.length() < max_symbols_in_name) {
        line_position.push_back(symbol);
        current_cursor_position++;
    }
}

std::string EraseLineMenuModel::getLinePositionString() {
    return line_position;
}

void EraseLineMenuModel::setCurrentCursorPosition(int pos) {
    if (pos >= 0 && pos <= line_position.length()){
        current_cursor_position = pos;
    }
    if (pos > line_position.length() && pos >= 0){
        current_cursor_position = line_position.length();
    }
}

int EraseLineMenuModel::getCurrentCursorPosition() {
    return current_cursor_position;
}

void EraseLineMenuModel::eraseSymbol() {
    if (!line_position.empty()){
        line_position.erase(line_position.begin() + current_cursor_position - 1);
        current_cursor_position--;
    }
}

void EraseLineMenuModel::setIsErase(bool isErased) {
    is_erase = isErased;
}

bool EraseLineMenuModel::getIsErase() {
    return is_erase;
}

int EraseLineMenuModel::getLinePosition() {
    return std::stoi(line_position);
}
