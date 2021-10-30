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
    while (m_render->window().isOpen()){
        while (m_render->window().pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                m_render->window().close();
            }
            if (event.type == sf::Event::TextEntered){
                m_model->insertSymbol(char(event.text.unicode));
            }
        }
        m_render -> Render();
    }
}
