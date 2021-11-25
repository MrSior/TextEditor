//
// Created by Семён Чубенко on 25.11.2021.
//

#ifndef TEXTEDITOR_COMMANDSMENUMODEL_H
#define TEXTEDITOR_COMMANDSMENUMODEL_H

#include "vector"
#include "string"
#include "SFML/Graphics.hpp"

class CommandsMenuModel {
private:
    std::vector<std::pair<std::string, sf::Keyboard::Key>> commands;  //name && keycode
    int current_line;
    bool is_command_chosen;
public:
    CommandsMenuModel();
    void Init();
    sf::Keyboard::Key getKeyCode();
    int getCurrentLine();
    std::string getCommandName(int pos);
    void setCurrentLine(int line);
    int GetCommandsCount();
    bool getIsCommandChosen();
    void setIsCommandChosen(bool value);
};


#endif //TEXTEDITOR_COMMANDSMENUMODEL_H
