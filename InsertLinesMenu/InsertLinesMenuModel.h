//
// Created by Семён Чубенко on 11.11.2021.
//

#ifndef TEXTEDITOR_INSERTLINESMENUMODEL_H
#define TEXTEDITOR_INSERTLINESMENUMODEL_H

#include "string"
#include "vector"

class InsertLinesMenuModel {
private:
    std::vector<std::string> line_n_pos;
    int current_cursor_pos;
    int current_line;
    int max_symbols_in_line;
public:
    InsertLinesMenuModel();
    void init();
    void insertSymbol(char symbol);
    void eraseSymbol();
    void setCurrentCursorPosition(int pos);
    void setCurrentLine(int pos);
    int getCurrentCursorPosition();
    int getCurrentLine();
    std::string getStringToInsert();
    std::string getPosToInsertString();
    std::string getNInsertsString();
    int getPosToInsert();
    int getNInserts();
};


#endif //TEXTEDITOR_INSERTLINESMENUMODEL_H
