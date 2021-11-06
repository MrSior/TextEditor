//
// Created by Семён Чубенко on 06.11.2021.
//

#ifndef TEXTEDITOR_CONTEXTUALREPLACEMENTRENDER_H
#define TEXTEDITOR_CONTEXTUALREPLACEMENTRENDER_H

#include "SFML/Graphics.hpp"
#include "ContextualReplacementModel.h"

class ContextualReplacementRender : public sf::Drawable, public sf::Transformable {
private:
    ContextualReplacementModel* m_model;
    sf::RenderWindow m_window;
    sf::Font font;
    int window_x, window_y;
public:
    ContextualReplacementRender(ContextualReplacementModel* model);
    sf::RenderWindow& window() { return m_window; };

    void init();
    void Render();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};


#endif //TEXTEDITOR_CONTEXTUALREPLACEMENTRENDER_H
