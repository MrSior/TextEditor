//
// Created by Семён Чубенко on 24.11.2021.
//

#include "EraseStarsMenuRender.h"

EraseStarsMenuRender::EraseStarsMenuRender(EraseStarsMenuModel *model) {
    m_model = model;
    Init();
}

void EraseStarsMenuRender::Init() {
    window_x = 946;
    window_y = 65;
    m_window.create(sf::VideoMode(window_x, window_y), "Text Editor", sf::Style::Close | sf::Style::Titlebar);
    //font.loadFromFile("/System/Library/Fonts/Supplemental/Courier New.ttf");
    font.loadFromFile("./Fonts/Courier New.ttf");
}

void EraseStarsMenuRender::Render() {
    m_window.clear(sf::Color(9,31,47));
    m_window.draw(*this);
    m_window.display();
}

void EraseStarsMenuRender::draw(sf::RenderTarget &target, sf::RenderStates states) const{
    states.transform *= getTransform();
    sf::RectangleShape cursor(sf::Vector2f(25, 45));
    cursor.setPosition(22 * (m_model->getCurrentCursorPosition() + 3) + 10, 7);
    cursor.setFillColor(sf::Color(66, 84, 90));
    target.draw(cursor);

    std::string line = "N: " + m_model->getLengthString();
    sf::Text textLine = sf::Text(line, font, 35);
    textLine.setStyle(sf::Text::Bold);
    textLine.setPosition(10, 5);
    target.draw(textLine);
}