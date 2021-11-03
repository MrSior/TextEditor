//
// Created by Семён Чубенко on 31.10.2021.
//

#include "FinderModel.h"
#include "fstream"
#include <cstdio>

FinderModel::FinderModel() {
    Init();
}

void FinderModel::Init() {
    //std::ifstream input("/Users/simonchubenko/Documents/C++/TextEditor/Saves/NamesOfSavedFiles.txt");
    std::ifstream input("./Saves/NamesOfSavedFiles.txt");
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
    if (pos > files.size() && pos >= 0){
        current_chosen_file_pos = files.size() - 1;
    }
}

void FinderModel::eraseFile(int pos) {
    std::string file_name = files[pos];
    std::string root = "./Saves/" + file_name + ".txt";
    char root_array[root.length()];
    for (int i = 0; i < root.length(); ++i) {
        root_array[i] = root[i];
    }
    remove(root_array);
    files.erase(files.begin() + pos);
    std::ofstream output;
    output.open("./Saves/NamesOfSavedFiles.txt", std::ios_base::trunc);
    for(std::string name : files){
        output << name << std::endl;
    }
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


