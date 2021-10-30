//
// Created by Семён Чубенко on 30.10.2021.
//

#ifndef TEXTEDITOR_SAVEMENUMODEL_H
#define TEXTEDITOR_SAVEMENUMODEL_H

#include "string"

class SaveMenuModel{
private:
    std::string file_name;
    int max_symbols_in_name;
    int current_cursor_position;
public:
    SaveMenuModel();
    void Init();
    void insertSymbol(char symbol);
    void setCurrentCursorPosition(int pos);
    int getCurrentCursorPosition();
    std::string getFileName();
};

#endif //TEXTEDITOR_SAVEMENUMODEL_H
