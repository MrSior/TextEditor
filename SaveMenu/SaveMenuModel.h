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
    bool is_saved;
public:
    SaveMenuModel();
    void Init();
    void insertSymbol(char symbol);
    void eraseSymbol();
    void setCurrentCursorPosition(int pos);
    void setIsSaved(bool isSaved);
    bool getIsSaved();
    int getCurrentCursorPosition();
    std::string getFileName();
};

#endif //TEXTEDITOR_SAVEMENUMODEL_H
