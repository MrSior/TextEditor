//
// Created by Семён Чубенко on 25.10.2021.
//

#include "TextEditorModel.h"
#include "boost/filesystem.hpp"
#include "fstream"
#include "iostream"

TextEditorModel::TextEditorModel() {
    init();
}

void TextEditorModel::init() {
    current_line = 0;
}

void TextEditorModel::DownloadSaveWithName(std::string fileName) {
    std::ifstream input ("Saves/" + fileName + ".txt");
    if (!input.is_open()){
        std::cout << "ERROR: file with name " + fileName + " can't be open" << std::endl;
    }
    std::string line;
    while (std::getline(input, line)){
        linesText.push_back(line);
    }
    input.close();
}

void TextEditorModel::SaveCurrentText(std::string name) {
    std::filesystem::path path("Saves/");
    path /= name + "/.txt";
    std::filesystem::create_directories(path.parent_path());

    std::ofstream output(path);
    for(const std::string& line : linesText){
        output << line << std::endl;
    }
    output.close();
}