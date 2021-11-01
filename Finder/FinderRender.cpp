//
// Created by Семён Чубенко on 31.10.2021.
//

#include "FinderRender.h"

FinderRender::FinderRender(FinderModel *model) {
    m_model = model;
    Init();
}

void FinderRender::Init() {
    window_x = 660;
    window_y = 700;
    y_scrolled = 0;
    m_window.create(sf::VideoMode(window_x, window_y), "Text Editor", sf::Style::Close | sf::Style::Titlebar);
    font.loadFromFile("/System/Library/Fonts/Supplemental/Courier New.ttf");
}

void FinderRender::Render() {
    m_window.clear(sf::Color(9,31,47));
    m_window.draw(*this);
    m_window.display();
}

void FinderRender::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();

    if (m_model->getFilesCount()) {
        sf::RectangleShape cursor(sf::Vector2f(float(window_x), 45));
        cursor.setPosition(0, m_model->getCurrentChosenFilePos() * 45 - y_scrolled);
        cursor.setFillColor(sf::Color(66, 84, 90));
        target.draw(cursor);
    }

    for (int i = 0; i < m_model->getFilesCount(); ++i) {
        std::string file = m_model->getFile(i);
        sf::Text textFile = sf::Text(file, font, 35);
        textFile.setStyle(sf::Text::Bold);
        textFile.setPosition(10, float (i) * 45 - y_scrolled);
        target.draw(textFile);
    }
}

float FinderRender::getY_scrolled() {
    return y_scrolled;
}

void FinderRender::setY_scrolled(float value) {
    if (value <= float (m_model->getFilesCount() - window_y / 45) * 45 && m_model->getFilesCount() > window_y / 45){
        y_scrolled = value;
    }
    if (y_scrolled < 0){
        y_scrolled = 0;
    }
}

void FinderRender::checkCursorPosition(std::string buttonPressed) {
    if (buttonPressed == "Down"){
        if (float(m_model->getCurrentChosenFilePos() + 1) * 45 - y_scrolled > window_y){
            y_scrolled += 45;
        }
    }
    if (buttonPressed == "Up"){
        if (float(m_model->getCurrentChosenFilePos() + 1) * 45 - y_scrolled < 45) {
            y_scrolled -= 90;
            if (y_scrolled < 0){
                y_scrolled = 0;
            }
        }
    }
}




