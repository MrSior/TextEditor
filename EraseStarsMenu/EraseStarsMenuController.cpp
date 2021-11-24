//
// Created by Семён Чубенко on 24.11.2021.
//

#include "EraseStarsMenuController.h"

EraseStarsMenuController::EraseStarsMenuController(EraseStarsMenuModel *model, EraseStarsMenuRender *render) {
    m_model = model;
    m_render = render;
}

void EraseStarsMenuController::Run() {
    sf::Event event;
    bool isSystemKeyPressed = false;
    while (m_render->window().isOpen()){
        while (m_render->window().pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                m_render->window().close();
            }
            if (event.type == sf::Event::KeyPressed){
                if (event.key.code == sf::Keyboard::Enter && !m_model->getLengthString().empty()){
                    m_model->setIsChosen(true);
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
                    int chosen_symbol = (event.mouseButton.x - 3 * 22 - 10) / 22;
                    m_model->setCurrentCursorPosition(chosen_symbol);
                }
            }
            if (event.type == sf::Event::TextEntered){
                if (!isSystemKeyPressed && isdigit(char(event.text.unicode))) {
                    m_model->insertSymbol(char(event.text.unicode));
                } else{
                    isSystemKeyPressed = false;
                }
            }
        }
        m_render -> Render();
    }
}