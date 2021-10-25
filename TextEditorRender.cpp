//
// Created by Семён Чубенко on 25.10.2021.
//

#include "SFML/Graphics.hpp"
#include "TextEditorRender.h"

TextEditorRender::TextEditorRender(TextEditorModel *model) {
    m_model = model;
    Init();
}

void TextEditorRender::Init() {

}

void TextEditorRender::Render() {
    m_window.create(sf::VideoMode(730, 600), "Text Editor", sf::Style::Close | sf::Style::Titlebar);
    m_window.clear(sf::Color(9,31,47));
    m_window.draw(*this);
    m_window.display();
}

void TextEditorRender::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    sf::View view = target.getDefaultView();
    view.setSize(view.getSize().x, float(m_model->getLineCount() * 12) + 600);
    target.setView(view);

    for (int i = 0; i < m_model->getLineCount(); ++i) {
        sf::Text lineNumber = sf::Text(std::to_string(i) + ".", font, 10);
        lineNumber.setPosition(2, float (i) * 12);
        std::string line = m_model->getLine(i);
        sf::Text textLine = sf::Text(line, font, 10);
        textLine.setPosition(10, float (i) * 12);
        target.draw(lineNumber);
        target.draw(textLine);
    }
}
