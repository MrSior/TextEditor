//
// Created by Семён Чубенко on 25.10.2021.
//

#include "SFML/Graphics.hpp"
#include "TextEditorRender.h"
#include "cmath"
#include "iostream"

TextEditorRender::TextEditorRender(TextEditorModel *model) {
    m_model = model;
    Init();
}

void TextEditorRender::Init() {
    x_scrolled = 0;
    y_scrolled = 0;
    window_x = 1100;
    window_y = 700;
    m_window.create(sf::VideoMode(window_x, window_y), "Text Editor"/*, sf::Style::Close | sf::Style::Titlebar*/);
    //font.loadFromFile("/System/Library/Fonts/Supplemental/Courier New.ttf");
    font.loadFromFile("./Fonts/Courier New.ttf");
    //font.loadFromFile("/Users/simonchubenko/Documents/C++/text-editor/fonts/DejaVuSansMono.ttf");
}

void TextEditorRender::Render() {
    m_window.clear(sf::Color(9,31,47));
    m_window.draw(*this);
    m_window.display();
}

float TextEditorRender::getX_scrolled() {
    return x_scrolled;
}

float TextEditorRender::getY_scrolled() {
    return y_scrolled;
}

void TextEditorRender::setX_scrolled(float value) {
    if (value < 0){
        value = 0;
    }
    x_scrolled = value;
}

void TextEditorRender::setY_scrolled(float value) {
    if (value < 0){
        value = 0;
    }
    y_scrolled = value;
}

int numbersInNum(int a){
    return std::ceil(log10(a));
}

void TextEditorRender::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();
//    sf::View view = target.getDefaultView();
//    float scene_x = view.getSize().x + float(numbersInNum(m_model->getLineCount() + 1) - 1) * 22;
//    float scene_y = float(m_model->getLineCount() * 45) + 700;
//    view.setSize(scene_x, scene_y);
//    view.setCenter(scene_x / 2 - 44, 350);
//    view.zoom(700 / scene_y);
    //target.setView(view);


    sf::RectangleShape cursor(sf::Vector2f(25, 45));
    cursor.setPosition(sf::Vector2f(m_model->getCurrentCursorPosition() * 22 + 58
                                                + (numbersInNum(m_model->getLineCount() + 1) - 1) * 22 - x_scrolled,
                                            m_model->getCurrentLine() * 45 + 5 - y_scrolled));
    cursor.setFillColor(sf::Color(66, 84, 90));
    target.draw(cursor);

    int length = numbersInNum(m_model->getLineCount() + 1);

    sf::Text lineNumber = sf::Text(std::to_string(1) + ".", font, 35);
//    lineNumber.setPosition(10 + (length - 1) * 22, 0);
//    lineNumber.setStyle(sf::Text::Bold);
//    lineNumber.setFillColor(sf::Color::White);
//    target.draw(lineNumber);

    for (int i = 0; i < m_model->getLineCount(); ++i) {
        if (i >= 0) {
            lineNumber = sf::Text(std::to_string(i + 1) + ".", font, 35);
            lineNumber.setPosition(10 + (length - numbersInNum(i + 2)) * 22 - x_scrolled, float(i) * 45 - y_scrolled);
            lineNumber.setStyle(sf::Text::Bold);
            lineNumber.setFillColor(sf::Color::White);
            target.draw(lineNumber);
        }
        std::string line = m_model->getLine(i);
        sf::Text textLine = sf::Text(line, font, 35);
        textLine.setStyle(sf::Text::Bold);
        textLine.setPosition(60 + (numbersInNum(m_model->getLineCount() + 1) - 1) * 22 - x_scrolled, float (i) * 45 - y_scrolled);
        target.draw(textLine);
    }
}

void TextEditorRender::checkCursorPosition(std::string keyPressed) {
//    if (keyPressed == "Enter") {
//        if (float(m_model->getCurrentLine() + 1) * 45 - y_scrolled > window_y) {
//            y_scrolled += window_y - 45;
//        }
//    }
    if (keyPressed == "Backspace"){
        if (float(m_model->getCurrentLine() + 1) * 45 - y_scrolled < 45) {
            y_scrolled -= 90;
            if (y_scrolled < 0){
                y_scrolled = 0;
            }
        }
    }
    if (keyPressed == "Up"){
        if (float(m_model->getCurrentLine() + 1) * 45 - y_scrolled < 45) {
            y_scrolled -= 90;
            if (y_scrolled < 0){
                y_scrolled = 0;
            }
        }
    }
    if (keyPressed == "Down" || keyPressed == "Enter"){
        if (float(m_model->getCurrentLine() + 1) * 45 - y_scrolled > window_y) {
            y_scrolled += 45;
        }
    }
}

void TextEditorRender::changeWindowSize(int width, int height) {
    window_x = width;
    window_y = height;
    m_window.create(sf::VideoMode(window_x, window_y), "Text Editor"/*, sf::Style::Close | sf::Style::Titlebar*/);
}

sf::Vector2f TextEditorRender::getWindowSize() {
    return sf::Vector2f(window_x, window_y);
}

