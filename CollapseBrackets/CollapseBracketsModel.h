//
// Created by Семён Чубенко on 25.11.2021.
//

#ifndef TEXTEDITOR_COLLAPSEBRACKETSMODEL_H
#define TEXTEDITOR_COLLAPSEBRACKETSMODEL_H

#include "string"

class CollapseBracketsModel {
private:
    std::string line;
    int max_symbols_in_name;
    int current_cursor_position;
    bool is_chosen;
public:
    CollapseBracketsModel();
    void Init();
    void insertSymbol(char symbol);
    void eraseSymbol();
    void setCurrentCursorPosition(int pos);
    void setIsChosen(bool isSaved);
    bool getIsChosen();
    int getCurrentCursorPosition();
    std::string getLineString();
    int getLine();
};


#endif //TEXTEDITOR_COLLAPSEBRACKETSMODEL_H
