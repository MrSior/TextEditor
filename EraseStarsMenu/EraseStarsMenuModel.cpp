//
// Created by Семён Чубенко on 24.11.2021.
//

#include "EraseStarsMenuModel.h"

EraseStarsMenuModel::EraseStarsMenuModel() {
    Init();
}

void EraseStarsMenuModel::Init() {
    length = "";
    max_symbols_in_name = 30;
    current_cursor_position = 0;
    is_chosen = false;
}

void EraseStarsMenuModel::insertSymbol(char symbol) {
    if (length.length() < max_symbols_in_name) {
        length.push_back(symbol);
        current_cursor_position++;
    }
}

std::string EraseStarsMenuModel::getLengthString() {
    return length;
}

void EraseStarsMenuModel::setCurrentCursorPosition(int pos) {
    if (pos >= 0 && pos <= length.length()){
        current_cursor_position = pos;
    }
    if (pos > length.length() && pos >= 0){
        current_cursor_position = length.length();
    }
}

int EraseStarsMenuModel::getCurrentCursorPosition() {
    return current_cursor_position;
}

void EraseStarsMenuModel::eraseSymbol() {
    if (!length.empty()){
        length.erase(length.begin() + current_cursor_position - 1);
        current_cursor_position--;
    }
}

void EraseStarsMenuModel::setIsChosen(bool isSaved) {
    is_chosen = isSaved;
}

bool EraseStarsMenuModel::getIsChosen() {
    return is_chosen;
}

int EraseStarsMenuModel::getLength() {
    return std::stoi(length);
}
