//
// Created by Семён Чубенко on 06.11.2021.
//

#include "ContextualReplacementModel.h"

ContextualReplacementModel::ContextualReplacementModel() {
    init();
}

void ContextualReplacementModel::init() {
    fromStringToString.emplace_back("");
    fromStringToString.emplace_back("");
    fromStringToString.emplace_back("");
    fromStringToString.emplace_back("");
    current_cursor_pos = 0;
    current_line = 0;
    max_symbols_in_line = 30;
    is_chosen = false;
}

void ContextualReplacementModel::insertSymbol(char symbol) {
    if (fromStringToString[current_line].length() < max_symbols_in_line) {
        fromStringToString[current_line].insert(fromStringToString[current_line].begin() + current_cursor_pos, symbol);
        setCurrentCursorPosition(getCurrentCursorPosition() + 1);
    }
}

void ContextualReplacementModel::eraseSymbol() {
    if (!fromStringToString[current_line].empty()) {
        fromStringToString[current_line].erase(fromStringToString[current_line].begin() + current_cursor_pos - 1);
        setCurrentCursorPosition(getCurrentCursorPosition() - 1);
    }
}

void ContextualReplacementModel::setCurrentCursorPosition(int pos) {
    if (pos >= 0 && pos <= fromStringToString[current_line].length()){
        current_cursor_pos = pos;
    } else if (pos >= 0 && pos > fromStringToString[current_line].length()){
        current_cursor_pos = fromStringToString[current_line].length();
    }
}

void ContextualReplacementModel::setCurrentLine(int pos) {
    if (pos >= 0 && pos < fromStringToString.size()){
        current_line = pos;
        setCurrentCursorPosition(current_cursor_pos);
    }
}

int ContextualReplacementModel::getCurrentCursorPosition() {
    return current_cursor_pos;
}

int ContextualReplacementModel::getCurrentLine() {
    return current_line;
}

std::string ContextualReplacementModel::getFromString() {
    return fromStringToString[0];
}

std::string ContextualReplacementModel::getToString() {
    return fromStringToString[1];
}

std::string ContextualReplacementModel::getStartLineString() {
    return fromStringToString[2];
}

std::string ContextualReplacementModel::getLastLineString() {
    return fromStringToString[3];
}

void ContextualReplacementModel::setIsChosen(bool value) {
    is_chosen = value;
}

bool ContextualReplacementModel::getIsChosen() {
    return is_chosen;
}

int ContextualReplacementModel::getStartLine() {
    if (getStartLineString().empty()) return 1;
    return std::stoi(getStartLineString());
}

int ContextualReplacementModel::getLastLine() {
    if (getLastLineString().empty()) return -1000;
    return std::stoi(getLastLineString());
}

