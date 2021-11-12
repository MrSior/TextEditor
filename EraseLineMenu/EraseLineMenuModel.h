//
// Created by Семён Чубенко on 12.11.2021.
//

#ifndef TEXTEDITOR_ERASELINEMENUMODEL_H
#define TEXTEDITOR_ERASELINEMENUMODEL_H

#include "string"

class EraseLineMenuModel {
private:
    std::string line_position;
    int max_symbols_in_name;
    int current_cursor_position;
    bool is_erase;
public:
    EraseLineMenuModel();
    void Init();
    void insertSymbol(char symbol);
    void eraseSymbol();
    void setCurrentCursorPosition(int pos);
    void setIsErase(bool isErased);
    bool getIsErase();
    int getCurrentCursorPosition();
    std::string getLinePositionString();
    int getLinePosition();
};


#endif //TEXTEDITOR_ERASELINEMENUMODEL_H
