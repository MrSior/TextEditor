//
// Created by Семён Чубенко on 25.10.2021.
//

#include "TextEditorController.h"
#include "SFML/Graphics.hpp"
#include "iostream"

TextEditorController::TextEditorController(TextEditorRender *render, TextEditorModel *model) {
    m_model = model;
    m_render = render;
}

void TextEditorController::Run() {
    sf::Event event;
    bool systemKeyPressed = false;
    while (m_render->window().isOpen()){
        while (m_render->window().pollEvent(event)){
            if (event.type == sf::Event::Closed){
                m_render->window().close();
            }
            if (event.type == sf::Event::KeyPressed){
                if (event.key.code == sf::Keyboard::Left){
                    m_model->setCurrentCursorPosition(m_model->getCurrentCursorPosition() - 1);
                }
                if (event.key.code == sf::Keyboard::Right){
                    m_model->setCurrentCursorPosition(m_model->getCurrentCursorPosition() + 1);
                }
                if (event.key.code == sf::Keyboard::Up){
                    m_model->setCurrentLine(m_model->getCurrentLine() - 1);
                    m_render->checkCursorPosition("Up");
                }
                if (event.key.code == sf::Keyboard::Down){
                    m_model->setCurrentLine(m_model->getCurrentLine() + 1);
                    m_render->checkCursorPosition("Down");
                }
                if (event.key.code == sf::Keyboard::Enter){
                    m_model->lineBreak();
                    m_render->checkCursorPosition("Enter");
                    systemKeyPressed = true;
                }
                if (event.key.code == sf::Keyboard::BackSpace){
                    m_model->eraseSymbol();
                    m_render->checkCursorPosition("Backspace");
                    systemKeyPressed = true;
                }
            }
            if (event.type == sf::Event::MouseWheelScrolled){
                if (event.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel){
                    if (event.mouseWheelScroll.delta > 0){
                        if (m_render->getY_scrolled() > 0){
                            m_render->setY_scrolled(m_render->getY_scrolled() - event.mouseWheelScroll.delta * 1.5);
                        }
                    } else{
                        if (m_render->getY_scrolled() < float(m_model->getLineCount() - 7) * 45 && m_model->getLineCount() > 15){
                            m_render->setY_scrolled(m_render->getY_scrolled() - event.mouseWheelScroll.delta * 1.5);
                        }
                    }
                }
            }
            if (event.type == sf::Event::TextEntered){
                //std::cout << char(event.text.unicode) <<'\n';
                if (!systemKeyPressed) {
                    m_model->insertSymbol(char(event.text.unicode));
                } else{
                    systemKeyPressed = false;
                }
            }
        }
        m_render -> Render();
    }
}

