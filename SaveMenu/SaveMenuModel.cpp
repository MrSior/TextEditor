//
// Created by Семён Чубенко on 30.10.2021.
//

#include "SaveMenuModel.h"

SaveMenuModel::SaveMenuModel() {
    Init();
}

void SaveMenuModel::Init() {
    file_name = "";
    max_symbols_in_name = 30;
    current_cursor_position = 0;
}

void SaveMenuModel::insertSymbol(char symbol) {
    if (file_name.length() < max_symbols_in_name) {
        file_name.push_back(symbol);
        current_cursor_position++;
    }
}

std::string SaveMenuModel::getFileName() {
    return file_name;
}

void SaveMenuModel::setCurrentCursorPosition(int pos) {
    if (pos >= 0 && pos <= max_symbols_in_name){
        current_cursor_position = pos;
    }
}

int SaveMenuModel::getCurrentCursorPosition() {
    return current_cursor_position;
}
