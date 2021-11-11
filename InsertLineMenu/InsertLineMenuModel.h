//
// Created by Семён Чубенко on 11.11.2021.
//

#ifndef TEXTEDITOR_INSERTLINEMENUMODEL_H
#define TEXTEDITOR_INSERTLINEMENUMODEL_H

#include "string"
#include "vector"

class InsertLineMenuModel {
private:
    std::vector<std::string> InsertingStringAndItPos;
    int current_cursor_pos;
    int current_line;
    int max_symbols_in_line;
public:
    InsertLineMenuModel();
    void init();
    void insertSymbol(char symbol);
    void eraseSymbol();
    void setCurrentCursorPosition(int pos);
    void setCurrentLine(int pos);
    int getCurrentCursorPosition();
    int getCurrentLine();
    std::string getStringToInsert();
    std::string getPosToInsertString();
    int getPosToInsert();
};


#endif //TEXTEDITOR_INSERTLINEMENUMODEL_H
