//
// Created by Семён Чубенко on 19.11.2021.
//

#include "ChangeSymbolRender.h"

ChangeSymbolRender::ChangeSymbolRender(ChangeSymbolModel *model) {
    m_model = model;
    init();
}

void ChangeSymbolRender::init() {
    window_x = 946;
    window_y = 155;
    m_window.create(sf::VideoMode(window_x, window_y), "Text Editor", sf::Style::Close | sf::Style::Titlebar);
    font.loadFromFile("./Fonts/Courier New.ttf");
}

void ChangeSymbolRender::Render() {
    m_window.clear(sf::Color(9,31,47));
    m_window.draw(*this);
    m_window.display();
}

void ChangeSymbolRender::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();
    sf::RectangleShape cursor(sf::Vector2f(25, 45));
    if (m_model->getCurrentLine() == 0) {
        cursor.setPosition(22 * (m_model->getCurrentCursorPosition() + 8) + 10, 7 + m_model->getCurrentLine() * 45);
    } else if (m_model->getCurrentLine() == 1) {
        cursor.setPosition(22 * (m_model->getCurrentCursorPosition() + 9) + 10, 7 + m_model->getCurrentLine() * 45);
    } else {
        cursor.setPosition(22 * (m_model->getCurrentCursorPosition() + 8) + 10, 7 + m_model->getCurrentLine() * 45);
    }
    cursor.setFillColor(sf::Color(66, 84, 90));
    target.draw(cursor);

    std::string line = "Symbol: " + m_model->getStringToInsert();
    sf::Text textLine = sf::Text(line, font, 35);
    textLine.setStyle(sf::Text::Bold);
    textLine.setPosition(10, 5);
    target.draw(textLine);

    std::string line2 = "At line: " + m_model->getNInsertString();
    sf::Text textLine2 = sf::Text(line2, font, 35);
    textLine2.setStyle(sf::Text::Bold);
    textLine2.setPosition(10, 50);
    target.draw(textLine2);

    std::string line3 = "At pos: " + m_model->getPosToInsertString();
    sf::Text textLine3 = sf::Text(line3, font, 35);
    textLine3.setStyle(sf::Text::Bold);
    textLine3.setPosition(10, 95);
    target.draw(textLine3);
}