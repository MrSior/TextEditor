//
// Created by Семён Чубенко on 31.10.2021.
//

#ifndef TEXTEDITOR_FINDERMODEL_H
#define TEXTEDITOR_FINDERMODEL_H

#include "vector"
#include "string"


class FinderModel {
private:
    std::vector<std::string> files;
    int current_chosen_file_pos;
    bool isFileChose;
public:
    FinderModel();
    void Init();
    std::string getFile(int n);
    void addFile(std::string name);
    int getCurrentChosenFilePos();
    int getFilesCount();
    void setCurrentChosenFilePos(int pos);
    void eraseFile(int pos);
    void setIsFileChose(bool value);
    bool getIsFileChose();
};


#endif //TEXTEDITOR_FINDERMODEL_H
