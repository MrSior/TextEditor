//
// Created by Семён Чубенко on 25.10.2021.
//

#ifndef TEXTEDITOR_TEXTEDITORRENDER_H
#define TEXTEDITOR_TEXTEDITORRENDER_H

#include "SFML/Graphics.hpp"
#include "TextEditorModel.h"

class TextEditorRender : public sf::Drawable, public sf::Transformable{
private:
    TextEditorModel* m_model;
    sf::RenderWindow m_window;
    sf::Font font;
public:
    TextEditorRender(TextEditorModel* model);
    sf::RenderWindow& window() { return m_window; };

    void Init();
    void Render();

    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};

#endif //TEXTEDITOR_TEXTEDITORRENDER_H
