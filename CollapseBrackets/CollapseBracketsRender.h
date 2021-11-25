//
// Created by Семён Чубенко on 25.11.2021.
//

#ifndef TEXTEDITOR_COLLAPSEBRACKETSRENDER_H
#define TEXTEDITOR_COLLAPSEBRACKETSRENDER_H

#include "SFML/Graphics.hpp"
#include "CollapseBracketsModel.h"

class CollapseBracketsRender : public sf::Drawable, public sf::Transformable {
private:
    CollapseBracketsModel* m_model;
    sf::RenderWindow m_window;
    sf::Font font;
    int window_x, window_y;
public:
    CollapseBracketsRender(CollapseBracketsModel* model);
    sf::RenderWindow& window() { return m_window; };

    void Init();
    void Render();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};


#endif //TEXTEDITOR_COLLAPSEBRACKETSRENDER_H
