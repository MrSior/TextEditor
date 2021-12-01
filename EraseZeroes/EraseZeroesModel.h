//
// Created by Семён Чубенко on 02.12.2021.
//

#ifndef TEXTEDITOR_ERASEZEROESMODEL_H
#define TEXTEDITOR_ERASEZEROESMODEL_H

#include "string"
#include "vector"

class EraseZeroesModel {
    std::vector<std::string> InsertingStringAndItPos;
    int current_cursor_pos;
    int current_line;
    int max_symbols_in_line;
    bool is_insert;
public:
    EraseZeroesModel();
    void init();
    void insertSymbol(char symbol);
    void eraseSymbol();
    void setCurrentCursorPosition(int pos);
    void setCurrentLine(int pos);
    int getCurrentCursorPosition();
    int getCurrentLine();
    std::string getStringToInsert();
    std::string getPosToInsertString();
    int getLastLine();
    int getStartLine();
    void setIsInsert(bool isInsert);
    bool getIsInsert();
};


#endif //TEXTEDITOR_ERASEZEROESMODEL_H
