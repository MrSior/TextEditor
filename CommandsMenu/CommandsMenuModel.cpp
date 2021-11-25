//
// Created by Семён Чубенко on 25.11.2021.
//

#include "CommandsMenuModel.h"

CommandsMenuModel::CommandsMenuModel() {
    Init();
}

void CommandsMenuModel::Init() {
    current_line = 0;
    is_command_chosen = false;
    commands.emplace_back("Delete the contents in curly brackets (cmd + D)", sf::Keyboard::D);
    commands.emplace_back("Contextual replacementModel (cmd + K)", sf::Keyboard::K);
    commands.emplace_back("Insert line (cmd + I)", sf::Keyboard::I);
    commands.emplace_back("Insert lines (cmd + U)", sf::Keyboard::U);
    commands.emplace_back("Erase line (cmd + R)", sf::Keyboard::R);
    commands.emplace_back("Insert substring (cmd + B)", sf::Keyboard::B);
    commands.emplace_back("Change symbol (cmd + T)", sf::Keyboard::T);
    commands.emplace_back("Erase zeroes (cmd + 0)", sf::Keyboard::Num0);
    commands.emplace_back("Erase non-increasing sequence (cmd + ,)", sf::Keyboard::Comma);
    commands.emplace_back("Erase stars (cmd + 8)", sf::Keyboard::Num8);
}

sf::Keyboard::Key CommandsMenuModel::getKeyCode() {
    return commands[getCurrentLine()].second;
}

int CommandsMenuModel::getCurrentLine() {
    return current_line;
}

void CommandsMenuModel::setCurrentLine(int line) {
    if (line < 0 || line >= commands.size()) return;
    current_line = line;
}

int CommandsMenuModel::GetCommandsCount() {
    return commands.size();
}

bool CommandsMenuModel::getIsCommandChosen() {
    return is_command_chosen;
}

void CommandsMenuModel::setIsCommandChosen(bool value) {
    is_command_chosen = value;
}

std::string CommandsMenuModel::getCommandName(int pos) {
    return commands[pos].first;
}










