//
// Created by Семён Чубенко on 06.11.2021.
//

#ifndef TEXTEDITOR_CONTEXTUALREPLACEMENTMODEL_H
#define TEXTEDITOR_CONTEXTUALREPLACEMENTMODEL_H

#include "string"
#include "vector"

class ContextualReplacementModel {
private:
    std::vector<std::string> fromStringToString;
    int current_cursor_pos;
    int current_line;
    int max_symbols_in_line;
    bool is_chosen;
public:
    ContextualReplacementModel();
    void init();
    void insertSymbol(char symbol);
    void eraseSymbol();
    void setCurrentCursorPosition(int pos);
    void setCurrentLine(int pos);
    void setIsChosen(bool value);
    bool getIsChosen();
    int getCurrentCursorPosition();
    int getCurrentLine();
    std::string getFromString();
    std::string getToString();
    std::string getStartLineString();
    std::string getLastLineString();
    int getStartLine();
    int getLastLine();
};


#endif //TEXTEDITOR_CONTEXTUALREPLACEMENTMODEL_H
