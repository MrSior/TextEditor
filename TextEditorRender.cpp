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
    m_window.create(sf::VideoMode(1100, 700), "Text Editor", sf::Style::Close | sf::Style::Titlebar);
    font.loadFromFile("/System/Library/Fonts/Supplemental/Courier New.ttf");
}

void TextEditorRender::Render() {
    m_window.clear(sf::Color(9,31,47));
    m_window.draw(*this);
    m_window.display();
}

int numbersInNum(int a){
    return std::ceil(log10(a));
}

void TextEditorRender::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();
    sf::View view = target.getDefaultView();
    view.setSize(view.getSize().x, float(m_model->getLineCount() * 12) + 700);
    //target.setView(view);

    sf::RectangleShape cursor(sf::Vector2f(25, 45));
    cursor.setPosition(sf::Vector2f(m_model->getCurrentCursorPosition() * 22 + 58
                                                + (numbersInNum(m_model->getLineCount() + 1) - 1) * 22,
                                            m_model->getCurrentLine() * 45 + 5));
    cursor.setFillColor(sf::Color(66, 84, 90));
    target.draw(cursor);

    int length = numbersInNum(m_model->getLineCount() + 1);

    sf::Text lineNumber = sf::Text(std::to_string(1) + ".", font, 35);
    lineNumber.setPosition(10 + (length - 1) * 22, 0);
    lineNumber.setStyle(sf::Text::Bold);
    lineNumber.setFillColor(sf::Color::White);
    target.draw(lineNumber);

    for (int i = 0; i < m_model->getLineCount(); ++i) {
        if (i >= 1) {
            lineNumber = sf::Text(std::to_string(i + 1) + ".", font, 35);
            lineNumber.setPosition(10 + (length - numbersInNum(i + 2)) * 22, float(i) * 45);
            lineNumber.setStyle(sf::Text::Bold);
            lineNumber.setFillColor(sf::Color::White);
            target.draw(lineNumber);
        }
        std::string line = m_model->getLine(i);
        sf::Text textLine = sf::Text(line, font, 35);
        textLine.setStyle(sf::Text::Bold);
        textLine.setPosition(60 + (numbersInNum(m_model->getLineCount() + 1) - 1) * 22, float (i) * 45);
        target.draw(textLine);
    }
}
