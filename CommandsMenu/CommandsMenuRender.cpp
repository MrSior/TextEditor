//
// Created by Семён Чубенко on 25.11.2021.
//

#include "CommandsMenuRender.h"

CommandsMenuRender::CommandsMenuRender(CommandsMenuModel *model) {
    m_model = model;
    Init();
}

void CommandsMenuRender::Init() {
    window_x = 1050;
    window_y = 450;
    m_window.create(sf::VideoMode(window_x, window_y), "Text Editor", sf::Style::Close | sf::Style::Titlebar);
    //font.loadFromFile("/System/Library/Fonts/Supplemental/Courier New.ttf");
    font.loadFromFile("./Fonts/Courier New.ttf");
}

void CommandsMenuRender::Render() {
    m_window.clear(sf::Color(9,31,47));
    m_window.draw(*this);
    m_window.display();
}

void CommandsMenuRender::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();

    sf::RectangleShape cursor(sf::Vector2f(float(window_x), 45));
    cursor.setPosition(0, m_model->getCurrentLine() * 45);
    cursor.setFillColor(sf::Color(66, 84, 90));
    target.draw(cursor);

    for (int i = 0; i < m_model->GetCommandsCount(); ++i) {
        std::string name = m_model->getCommandName(i);
        sf::Text textFile = sf::Text(name, font, 35);
        textFile.setStyle(sf::Text::Bold);
        textFile.setPosition(10, float (i) * 45);
        target.draw(textFile);
    }
}


