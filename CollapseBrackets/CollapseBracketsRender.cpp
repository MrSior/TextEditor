//
// Created by Семён Чубенко on 25.11.2021.
//

#include "CollapseBracketsRender.h"

CollapseBracketsRender::CollapseBracketsRender(CollapseBracketsModel *model) {
    m_model = model;
    Init();
}

void CollapseBracketsRender::Init() {
    window_x = 946;
    window_y = 65;
    m_window.create(sf::VideoMode(window_x, window_y), "Text Editor", sf::Style::Close | sf::Style::Titlebar);
    //font.loadFromFile("/System/Library/Fonts/Supplemental/Courier New.ttf");
    font.loadFromFile("./Fonts/Courier New.ttf");
}

void CollapseBracketsRender::Render() {
    m_window.clear(sf::Color(9,31,47));
    m_window.draw(*this);
    m_window.display();
}

void CollapseBracketsRender::draw(sf::RenderTarget &target, sf::RenderStates states) const{
    states.transform *= getTransform();
    sf::RectangleShape cursor(sf::Vector2f(25, 45));
    cursor.setPosition(22 * (m_model->getCurrentCursorPosition() + 6) + 10, 7);
    cursor.setFillColor(sf::Color(66, 84, 90));
    target.draw(cursor);

    std::string line = "Line: " + m_model->getLineString();
    sf::Text textLine = sf::Text(line, font, 35);
    textLine.setStyle(sf::Text::Bold);
    textLine.setPosition(10, 5);
    target.draw(textLine);
}