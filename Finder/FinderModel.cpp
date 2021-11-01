//
// Created by Семён Чубенко on 31.10.2021.
//

#include "FinderModel.h"
#include "fstream"

FinderModel::FinderModel() {
    Init();
}

void FinderModel::Init() {
    std::ifstream input("/Users/simonchubenko/Documents/C++/TextEditor/Saves/NamesOfSavedFiles.txt");
    std::string line;
    while (std::getline(input, line)){
        files.push_back(line);
    }
    input.close();
    current_chosen_file_pos = 0;
    isFileChose = false;
}

std::string FinderModel::getFile(int n) {
    return files[n];
}

void FinderModel::addFile(std::string name) {
    files.push_back(name);
}

int FinderModel::getCurrentChosenFilePos() {
    return current_chosen_file_pos;
}

void FinderModel::setCurrentChosenFilePos(int pos) {
    if (pos >= 0 && pos < files.size()){
        current_chosen_file_pos = pos;
    }
}

void FinderModel::eraseFile(int pos) {
    files.erase(files.begin() + pos);
}

int FinderModel::getFilesCount() {
    return files.size();
}

void FinderModel::setIsFileChose(bool value) {
    isFileChose = value;
}

bool FinderModel::getIsFileChose() {
    return isFileChose;
}


