//
// Created by Семён Чубенко on 25.10.2021.
//

#include "TextEditorController.h"
#include "SFML/Graphics.hpp"
#include "SaveMenu/SaveMenuController.h"
#include "SaveMenu/SaveMenuRender.h"
#include "SaveMenu/SaveMenuModel.h"
#include "Finder/FinderModel.h"
#include "Finder/FinderRender.h"
#include "Finder/FinderController.h"
#include "ContextualReplacementMenu/ContextualReplacementModel.h"
#include "ContextualReplacementMenu/ContextualReplacementRender.h"
#include "ContextualReplacementMenu/ContextualReplacementController.h"
#include "InsertLineMenu/InsertLineMenuModel.h"
#include "InsertLineMenu/InsertLineMenuRender.h"
#include "InsertLineMenu/InsertLineMenuController.h"
#include "InsertLinesMenu/InsertLinesMenuModel.h"
#include "InsertLinesMenu/InsertLinesMenuRender.h"
#include "InsertLinesMenu/InsertLinesMenuController.h"
#include "EraseLineMenu/EraseLineMenuModel.h"
#include "EraseLineMenu/EraseLineMenuRender.h"
#include "EraseLineMenu/EraseLineMenuController.h"
#include "iostream"
#include "cmath"

TextEditorController::TextEditorController(TextEditorRender *render, TextEditorModel *model) {
    m_model = model;
    m_render = render;
    is_command_pressed = false;
}

void TextEditorController::Run() {
    sf::Event event;
    bool isSystemKeyPressed = false;
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
                    isSystemKeyPressed = true;
                }
                if (event.key.code == sf::Keyboard::BackSpace){
                    m_model->eraseSymbol();
                    m_render->checkCursorPosition("Backspace");
                    isSystemKeyPressed = true;
                }
                if (event.key.code == sf::Keyboard::Tab){
                    isSystemKeyPressed = true;
                }
                if (event.key.code == sf::Keyboard::LSystem){
                    is_command_pressed = true;
                }

                if (is_command_pressed){
                    if (event.key.code == sf::Keyboard::D){
                        is_command_pressed = false;
                        m_model->collapseBrackets();
                    }
                    if (event.key.code == sf::Keyboard::S){
                        is_command_pressed = false;
                        if (m_model->getFileName().empty()) {
                            SaveMenuModel model;
                            SaveMenuRender render(&model);
                            SaveMenuController controller(&model, &render);
                            controller.Run();
                            if (model.getIsSaved()) {
                                m_model->SaveCurrentText(model.getFileName());
                            }
                        } else{
                            m_model->SaveCurrentText(m_model->getFileName());
                        }
                    }
                    if (event.key.code == sf::Keyboard::O){
                        is_command_pressed = false;
                        FinderModel model;
                        FinderRender render(&model);
                        FinderController controller(&model, &render);
                        controller.Run();
                        if (model.getIsFileChose()) {
                            m_model->DownloadSaveWithName(model.getFile(model.getCurrentChosenFilePos()));
                        }
                    }
                    if (event.key.code == sf::Keyboard::N){
                        is_command_pressed = false;
                        if (m_model->getFileName().empty()) {
                            SaveMenuModel model;
                            SaveMenuRender render(&model);
                            SaveMenuController controller(&model, &render);
                            controller.Run();
                            if (model.getIsSaved()) {
                                m_model->SaveCurrentText(model.getFileName());
                            }
                        } else{
                            m_model->SaveCurrentText(m_model->getFileName());
                        }
                        m_model->Init();
                        m_render->Init();
                    }
                    if (event.key.code == sf::Keyboard::K){
                        is_command_pressed = false;
                        ContextualReplacementModel model;
                        ContextualReplacementRender render(&model);
                        ContextualReplacementController controller(&model, &render);
                        controller.Run();
                        m_model->contextualReplacement(model.getFromString(), model.getToString());
                    }
                    if (event.key.code == sf::Keyboard::I){
                        is_command_pressed = false;
                        InsertLineMenuModel model;
                        InsertLineMenuRender render(&model);
                        InsertLineMenuController controller(&model, &render);
                        controller.Run();
                        if (model.getIsInsert()) {
                            m_model->InsertLine(model.getPosToInsert() - 1, model.getStringToInsert());
                        }
                    }
                    if (event.key.code == sf::Keyboard::U){
                        is_command_pressed = false;
                        InsertLinesMenuModel model;
                        InsertLinesMenuRender render(&model);
                        InsertLinesMenuController controller(&model, &render);
                        controller.Run();
                        if (model.getIsInsert()) {
                            for (int i = 0; i < model.getNInserts(); ++i) {
                                m_model->InsertLine(model.getPosToInsert() - 1 + i, model.getStringToInsert());
                            }
                        }
                    }
                    if (event.key.code == sf::Keyboard::E){
                        is_command_pressed = false;
                        EraseLineMenuModel model;
                        EraseLineMenuRender render(&model);
                        EraseLineMenuController controller(&model, &render);
                        controller.Run();
                        if (model.getIsErase()){
                            m_model->EraseLine(model.getLinePosition() - 1);
                        }
                    }
                }
            }
            if (event.type == sf::Event::MouseWheelScrolled){
                if (event.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel){
                    if (event.mouseWheelScroll.delta > 0){
                        if (m_render->getY_scrolled() > 0){
                            m_render->setY_scrolled(m_render->getY_scrolled() - event.mouseWheelScroll.delta * 2);
                        }
                    } else{
                        if (m_render->getY_scrolled() < float(m_model->getLineCount() - 7) * 45 && m_model->getLineCount() > 15){
                            m_render->setY_scrolled(m_render->getY_scrolled() - event.mouseWheelScroll.delta * 2);
                        }
                    }
                }
                if (event.mouseWheelScroll.wheel == sf::Mouse::HorizontalWheel){
                    //m_render->setX_scrolled(m_render->getX_scrolled() - event.mouseWheelScroll.delta * 1.5);
                    if (event.mouseWheelScroll.delta > 0){
                        if (m_render->getX_scrolled() > 0){
                            m_render->setX_scrolled(m_render->getX_scrolled() - event.mouseWheelScroll.delta * 1.5);
                        }
                    }else{
                        if (m_render->getX_scrolled() < std::ceil(log10(m_model->getLineCount() + 1) - 1) * 22){
                            m_render->setX_scrolled(m_render->getX_scrolled() - event.mouseWheelScroll.delta * 1.5);
                        }
                    }
                }
            }
            if (event.type == sf::Event::MouseButtonPressed){
                if (event.mouseButton.button == sf::Mouse::Left){
                    if (event.mouseButton.x > std::ceil(log10(m_model->getLineCount() + 1) - 1) * 22 + 60 - m_render->getX_scrolled()) {
                        int line = int(event.mouseButton.y + m_render->getY_scrolled()) / 45;
                        int symbol = int(event.mouseButton.x + m_render->getX_scrolled()
                                         - std::ceil(log10(m_model->getLineCount() + 1) - 1) * 22 - 60) / 22;
                        m_model->setCurrentLine(line);
                        m_model->setCurrentCursorPosition(symbol);
                    }
                }
            }
            if (event.type == sf::Event::Resized) {
                sf::Vector2f windowSize = m_render->getWindowSize();
                int prev_max_symbols_in_line = m_model->getMaxSymbolsInLine();
                m_render->changeWindowSize(event.size.width, event.size.height);
                m_model->changeMaxSymbolsInLine(event.size.width);
                m_model->resetLines(m_render->getWindowSize().x < windowSize.x, prev_max_symbols_in_line);
                m_render->setY_scrolled(m_render->getY_scrolled() - (windowSize.y - m_render->getWindowSize().y));
            }
            if (event.type == sf::Event::TextEntered){
                //std::cout << char(event.text.unicode) <<'\n';
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

