//
// Created by Семён Чубенко on 25.10.2021.
//

#ifndef TEXTEDITOR_TEXTEDITORCONTROLLER_H
#define TEXTEDITOR_TEXTEDITORCONTROLLER_H

#include "TextEditorRender.h"
#include "TextEditorModel.h"
#include "SFML/Graphics.hpp"

class TextEditorController{
    TextEditorRender* m_render;
    TextEditorModel* m_model;
    bool is_command_pressed;
public:
    TextEditorController(TextEditorRender* render, TextEditorModel* model);
    void Run();
};

#endif //TEXTEDITOR_TEXTEDITORCONTROLLER_H
