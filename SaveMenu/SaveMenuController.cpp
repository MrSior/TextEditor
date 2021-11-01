//
// Created by Семён Чубенко on 30.10.2021.
//

#include "SaveMenuController.h"

SaveMenuController::SaveMenuController(SaveMenuModel *model, SaveMenuRender *render) {
    m_model = model;
    m_render = render;
}

void SaveMenuController::Run() {
    sf::Event event;
    bool isSystemKeyPressed = false;
    while (m_render->window().isOpen()){
        while (m_render->window().pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                m_render->window().close();
            }
            if (event.type == sf::Event::KeyPressed){
                if (event.key.code == sf::Keyboard::Enter){
                    m_model->setIsSaved(true);
                    m_render->window().close();
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
            }
            if (event.type == sf::Event::MouseButtonPressed){
                if (event.mouseButton.button == sf::Mouse::Left){
                    int chosen_symbol = (event.mouseButton.x - 252) / 22;
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
        m_render -> Render();
    }
}
