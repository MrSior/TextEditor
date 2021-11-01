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
    if (pos > files.size() && pos >= 0){
        current_chosen_file_pos = files.size() - 1;
    }
}

void FinderModel::eraseFile(int pos) {
//    std::string fn = files[pos];
//    //char file_name[fn.length()];
//    std::string p = "/Users/simonchubenko/Documents/C++/TextEditor/Saves/";
//    char path[fn.length() + p.length()];
//    //std::strcpy(file_name, fn.c_str());
//    for (int i = 0; i < p.length(); i++) {
//        path[i] = p[i];
//    }
//    for (int i = p.length() - 1; i < fn.length() + p.length(); i++) {
//        path[i] = fn[i - ];
//    }
//    p = ".txt";
//    for (int i = fn.length() + p.length() - 1; i < fn.length() + p.length(); ++i) {
//        path[i] = p[i];
//    }

    files.erase(files.begin() + pos);
    std::ofstream output;
    output.open("/Users/simonchubenko/Documents/C++/TextEditor/Saves/NamesOfSavedFiles.txt", std::ios_base::trunc);
    for(std::string name : files){
        output << name << std::endl;
    }
    //remove("/Users/simonchubenko/Documents/C++/TextEditor/Saves/" + file_name + ".txt");
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


