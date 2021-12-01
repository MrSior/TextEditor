//
// Created by Семён Чубенко on 02.12.2021.
//

#ifndef TEXTEDITOR_ERASEZEROESRENDER_H
#define TEXTEDITOR_ERASEZEROESRENDER_H

#include "SFML/Graphics.hpp"
#include "EraseZeroesModel.h"

class EraseZeroesRender : public sf::Drawable, public sf::Transformable  {
private:
    EraseZeroesModel* m_model;
    sf::RenderWindow m_window;
    sf::Font font;
    int window_x, window_y;
public:
    EraseZeroesRender(EraseZeroesModel* model);
    sf::RenderWindow& window() { return m_window; };

    void init();
    void Render();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};


#endif //TEXTEDITOR_ERASEZEROESRENDER_H
