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
    is_saved = false;
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
    if (pos >= 0 && pos <= file_name.length()){
        current_cursor_position = pos;
    }
    if (pos > file_name.length() && pos >= 0){
        current_cursor_position = file_name.length();
    }
}

int SaveMenuModel::getCurrentCursorPosition() {
    return current_cursor_position;
}

void SaveMenuModel::eraseSymbol() {
    if (!file_name.empty()){
        file_name.erase(file_name.begin() + current_cursor_position - 1);
        current_cursor_position--;
    }
}

void SaveMenuModel::setIsSaved(bool isSaved) {
    is_saved = isSaved;
}

bool SaveMenuModel::getIsSaved() {
    return is_saved;
}
