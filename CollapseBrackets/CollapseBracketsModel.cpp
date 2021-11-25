//
// Created by Семён Чубенко on 25.11.2021.
//

#include "CollapseBracketsModel.h"

CollapseBracketsModel::CollapseBracketsModel() {
    Init();
}

void CollapseBracketsModel::Init() {
    line = "";
    max_symbols_in_name = 30;
    current_cursor_position = 0;
    is_chosen = false;
}

void CollapseBracketsModel::insertSymbol(char symbol) {
    if (line.length() < max_symbols_in_name) {
        line.push_back(symbol);
        current_cursor_position++;
    }
}

std::string CollapseBracketsModel::getLineString() {
    return line;
}

void CollapseBracketsModel::setCurrentCursorPosition(int pos) {
    if (pos >= 0 && pos <= line.length()){
        current_cursor_position = pos;
    }
    if (pos > line.length() && pos >= 0){
        current_cursor_position = line.length();
    }
}

int CollapseBracketsModel::getCurrentCursorPosition() {
    return current_cursor_position;
}

void CollapseBracketsModel::eraseSymbol() {
    if (!line.empty()){
        line.erase(line.begin() + current_cursor_position - 1);
        current_cursor_position--;
    }
}

void CollapseBracketsModel::setIsChosen(bool isSaved) {
    is_chosen = isSaved;
}

bool CollapseBracketsModel::getIsChosen() {
    return is_chosen;
}

int CollapseBracketsModel::getLine() {
    return std::stoi(line);
}