//
// Created by Семён Чубенко on 15.11.2021.
//

#ifndef TEXTEDITOR_INSERTSUBSTRMENUMODEL_H
#define TEXTEDITOR_INSERTSUBSTRMENUMODEL_H

#include "vector"
#include "string"

class InsertSubstrMenuModel {
private:
    std::vector<std::string> line_n_pos;
    int current_cursor_pos;
    int current_line;
    int max_symbols_in_line;
    bool is_insert;
public:
    InsertSubstrMenuModel();
    void init();
    void insertSymbol(char symbol);
    void eraseSymbol();
    void setCurrentCursorPosition(int pos);
    void setCurrentLine(int pos);
    int getCurrentCursorPosition();
    int getCurrentLine();
    std::string getStringToInsert();
    std::string getPosToInsertString();
    std::string getNInsertString();
    int getPosToInsert();
    int getNInsert();
    bool getIsInsert();
    void setIsInsert(bool isInsert);
};


#endif //TEXTEDITOR_INSERTSUBSTRMENUMODEL_H
