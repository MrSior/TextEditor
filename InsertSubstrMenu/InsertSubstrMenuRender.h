//
// Created by Семён Чубенко on 15.11.2021.
//

#ifndef TEXTEDITOR_INSERTSUBSTRMENURENDER_H
#define TEXTEDITOR_INSERTSUBSTRMENURENDER_H

#include "SFML/Graphics.hpp"
#include "InsertSubstrMenuModel.h"

class InsertSubstrMenuRender : public sf::Drawable, public sf::Transformable {
private:
    InsertSubstrMenuModel* m_model;
    sf::RenderWindow m_window;
    sf::Font font;
    int window_x, window_y;
public:
    InsertSubstrMenuRender(InsertSubstrMenuModel* model);
    sf::RenderWindow& window() { return m_window; };

    void init();
    void Render();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};


#endif //TEXTEDITOR_INSERTSUBSTRMENURENDER_H
