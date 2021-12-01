//
// Created by Семён Чубенко on 06.11.2021.
//

#include "ContextualReplacementRender.h"
#include "iostream"

ContextualReplacementRender::ContextualReplacementRender(ContextualReplacementModel *model) {
    m_model = model;
    init();
}

void ContextualReplacementRender::init() {
    window_x = 946;
    window_y = 190;
    m_window.create(sf::VideoMode(window_x, window_y), "Text Editor", sf::Style::Close | sf::Style::Titlebar);
    font.loadFromFile("./Fonts/Courier New.ttf");
}

void ContextualReplacementRender::Render() {
    m_window.clear(sf::Color(9,31,47));
    m_window.draw(*this);
    m_window.display();
}

void ContextualReplacementRender::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();
    sf::RectangleShape cursor(sf::Vector2f(25, 45));
    if (m_model->getCurrentLine() == 0) {
        cursor.setPosition(22 * m_model->getCurrentCursorPosition() + 142, 7 + m_model->getCurrentLine() * 45);
    } else if (m_model->getCurrentLine() == 1) {
        cursor.setPosition(22 * m_model->getCurrentCursorPosition() + 98, 7 + m_model->getCurrentLine() * 45);
    } else if (m_model->getCurrentLine() == 2) {
        cursor.setPosition(22 * (m_model->getCurrentCursorPosition() + 12) + 10, 7 + m_model->getCurrentLine() * 45);
    } else if (m_model->getCurrentLine() == 3) {
        cursor.setPosition(22 * (m_model->getCurrentCursorPosition() + 11) + 10, 7 + m_model->getCurrentLine() * 45);
    }
    cursor.setFillColor(sf::Color(66, 84, 90));
    target.draw(cursor);

    std::string line = "From: " + m_model->getFromString();
    sf::Text textLine = sf::Text(line, font, 35);
    textLine.setStyle(sf::Text::Bold);
    textLine.setPosition(10, 5);
    target.draw(textLine);

    std::string line2 = "To: " + m_model->getToString();
    sf::Text textLine2 = sf::Text(line2, font, 35);
    textLine2.setStyle(sf::Text::Bold);
    textLine2.setPosition(10, 50);
    target.draw(textLine2);

    std::string line3 = "First line: " + m_model->getStartLineString();
    sf::Text textLine3 = sf::Text(line3, font, 35);
    textLine3.setStyle(sf::Text::Bold);
    textLine3.setPosition(10, 95);
    target.draw(textLine3);

    std::string line4 = "Last line: " + m_model->getLastLineString();
    sf::Text textLine4 = sf::Text(line4, font, 35);
    textLine4.setStyle(sf::Text::Bold);
    textLine4.setPosition(10, 140);
    target.draw(textLine4);
}



