//
// Created by Семён Чубенко on 25.10.2021.
//

#include "TextEditorController.h"
#include "SFML/Graphics.hpp"

TextEditorController::TextEditorController(TextEditorRender *render, TextEditorModel *model) {
    m_model = model;
    m_render = render;
}

void TextEditorController::Run() {
    sf::Event event;

    while (m_render->window().isOpen()){
        while (m_render->window().pollEvent(event)){
            if (event.type == sf::Event::Closed){
                m_render->window().close();
            }

        }
        m_render -> Render();
    }
}

