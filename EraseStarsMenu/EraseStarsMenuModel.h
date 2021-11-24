//
// Created by Семён Чубенко on 24.11.2021.
//

#ifndef TEXTEDITOR_ERASESTARSMENUMODEL_H
#define TEXTEDITOR_ERASESTARSMENUMODEL_H

#include "string"

class EraseStarsMenuModel {
private:
    std::string length;
    int max_symbols_in_name;
    int current_cursor_position;
    bool is_chosen;
public:
    EraseStarsMenuModel();
    void Init();
    void insertSymbol(char symbol);
    void eraseSymbol();
    void setCurrentCursorPosition(int pos);
    void setIsChosen(bool isSaved);
    bool getIsChosen();
    int getCurrentCursorPosition();
    std::string getLengthString();
    int getLength();
};


#endif //TEXTEDITOR_ERASESTARSMENUMODEL_H
