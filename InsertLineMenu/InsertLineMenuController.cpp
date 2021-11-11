//
// Created by Семён Чубенко on 11.11.2021.
//

#include "InsertLineMenuController.h"

InsertLineMenuController::InsertLineMenuController(InsertLineMenuModel *model, InsertLineMenuRender *render) {
    m_model = model;
    m_render = render;
}

void InsertLineMenuController::Run() {
    sf::Event event;
    bool isSystemKeyPressed = false;
    while (m_render->window().isOpen()) {
        while (m_render->window().pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                m_render->window().close();
            }
            if (event.type == sf::Event::KeyPressed){
                if (event.key.code == sf::Keyboard::Enter){
                    isSystemKeyPressed = true;
                    if (m_model->getCurrentLine() == 1) {
                        m_render->window().close();
                    } else {
                        m_model->setCurrentLine(m_model->getCurrentLine() + 1);
                        m_model->setCurrentCursorPosition(0);
                    }
                }
                if (event.key.code == sf::Keyboard::BackSpace){
                    isSystemKeyPressed = true;
                    m_model->eraseSymbol();
                }
                if (event.key.code == sf::Keyboard::Left){
                    m_model->setCurrentCursorPosition(m_model->getCurrentCursorPosition() - 1);
                }
                if (event.key.code == sf::Keyboard::Right){
                    m_model->setCurrentCursorPosition(m_model->getCurrentCursorPosition() + 1);
                }
                if (event.key.code == sf::Keyboard::Up){
                    m_model->setCurrentLine(m_model->getCurrentLine() - 1);
                }
                if (event.key.code == sf::Keyboard::Down){
                    m_model->setCurrentLine(m_model->getCurrentLine() + 1);
                }
            }
            if (event.type == sf::Event::MouseButtonPressed){
                if (event.mouseButton.button == sf::Mouse::Left){
                    int chosen_symbol;
                    if (m_model->getCurrentLine() == 0) {
                        chosen_symbol = (event.mouseButton.x - 142) / 22;
                    } else{
                        chosen_symbol = (event.mouseButton.x - 98) / 22;
                    }
                    m_model->setCurrentLine(event.mouseButton.y / 45);
                    m_model->setCurrentCursorPosition(chosen_symbol);
                }
            }
            if (event.type == sf::Event::TextEntered){
                if (!isSystemKeyPressed) {
                    m_model->insertSymbol(char(event.text.unicode));
                } else{
                    isSystemKeyPressed = false;
                }
            }
        }
        m_render->Render();
    }
}

