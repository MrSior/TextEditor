//
// Created by Семён Чубенко on 31.10.2021.
//

#include "FinderController.h"

FinderController::FinderController(FinderModel *model, FinderRender *render) {
    m_model = model;
    m_render = render;
}

void FinderController::Run() {
    sf::Event event;
    while (m_render->window().isOpen()){
        while (m_render->window().pollEvent(event)){
            if (event.type == sf::Event::Closed) {
                m_render->window().close();
            }
            if (event.type == sf::Event::KeyPressed){
                if (event.key.code == sf::Keyboard::Up){
                    m_model->setCurrentChosenFilePos(m_model->getCurrentChosenFilePos() - 1);
                }
                if (event.key.code == sf::Keyboard::Down){
                    m_model->setCurrentChosenFilePos(m_model->getCurrentChosenFilePos() + 1);
                }
                if (event.key.code == sf::Keyboard::Enter){
                    if (m_model->getFilesCount()) {
                        m_model->setIsFileChose(true);
                    }
                    m_render->window().close();
                }
            }
            if (event.type == sf::Event::MouseWheelScrolled) {
                if (event.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel) {
                    m_render->setY_scrolled(m_render->getY_scrolled() - event.mouseWheelScroll.delta * 2);
                }
            }
        }
        m_render->Render();
    }
}
