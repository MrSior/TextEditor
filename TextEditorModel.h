//
// Created by Семён Чубенко on 25.10.2021.
//

#ifndef TEXTEDITOR_TEXTEDITORMODEL_H
#define TEXTEDITOR_TEXTEDITORMODEL_H

#include "vector"
#include "string"

class TextEditorModel{
private:
    std::vector<std::string> linesText;
    int current_line;
    int current_cursor_position;
    int max_symbols_in_line;
    std::string file_name;
public:
    TextEditorModel();
    void Init();
    void DownloadSaveWithName(std::string fileName);
    void SaveCurrentText(std::string name);

    void EraseLine(int n);
    void InsertLine(int pos, std::string line);
    void setCurrentLine(int currentLine);
    void insertSymbol(char symbol);
    void eraseSymbol();
    void lineBreak();
    void setCurrentCursorPosition(int pos);
    void checkProtrudingPart();
    int getCurrentCursorPosition();
    int getCurrentLine();
    int getMaxSymbolsInLine();
    std::string getFileName();
    std::string getLine(int n);
    int getLineCount();
    void changeMaxSymbolsInLine(int new_width);
    void resetLines(bool isWindowSmaller, int prev_max_symbols_in_line);
    void collapseBrackets();
    void contextualReplacement(std::string fromString, std::string toString);
};

#endif //TEXTEDITOR_TEXTEDITORMODEL_H
