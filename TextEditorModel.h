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
public:
    TextEditorModel();
    void init();
    void DownloadSaveWithName(std::string fileName);
    void SaveCurrentText(std::string name);
};

#endif //TEXTEDITOR_TEXTEDITORMODEL_H
