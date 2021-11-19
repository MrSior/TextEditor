//
// Created by Семён Чубенко on 19.11.2021.
//

#ifndef TEXTEDITOR_CHANGESYMBOLRENDER_H
#define TEXTEDITOR_CHANGESYMBOLRENDER_H

#include "SFML/Graphics.hpp"
#include "ChangeSymbolModel.h"

class ChangeSymbolRender : public sf::Drawable, public sf::Transformable {
private:
    ChangeSymbolModel* m_model;
    sf::RenderWindow m_window;
    sf::Font font;
    int window_x, window_y;
public:
    ChangeSymbolRender(ChangeSymbolModel* model);
    sf::RenderWindow& window() { return m_window; };

    void init();
    void Render();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};


#endif //TEXTEDITOR_CHANGESYMBOLRENDER_H
