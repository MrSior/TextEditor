//
// Created by Семён Чубенко on 25.11.2021.
//

#include "CommandsMenuController.h"

CommandsMenuController::CommandsMenuController(CommandsMenuModel *model, CommandsMenuRender *render) {
    m_model = model;
    m_render = render;
}

void CommandsMenuController::Run() {
    sf::Event event;
    while (m_render->window().isOpen()){
        while (m_render->window().pollEvent(event)){
            if (event.type == sf::Event::Closed) {
                m_render->window().close();
            }
            if (event.type == sf::Event::KeyPressed){
                if (event.key.code == sf::Keyboard::Up){
                    m_model->setCurrentLine(m_model->getCurrentLine() - 1);
                }
                if (event.key.code == sf::Keyboard::Down){
                    m_model->setCurrentLine(m_model->getCurrentLine() + 1);
                }
                if (event.key.code == sf::Keyboard::Enter){
                    m_model->setIsCommandChosen(true);
                    m_render->window().close();
                }
            }
            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    if (int(event.mouseButton.y) / 45 != m_model->getCurrentLine()) {
                        m_model->setCurrentLine(int(event.mouseButton.y) / 45);
                    } else {
                        m_model->setIsCommandChosen(true);
                        m_render->window().close();
                    }
                }
            }
        }
        m_render->Render();
    }
}