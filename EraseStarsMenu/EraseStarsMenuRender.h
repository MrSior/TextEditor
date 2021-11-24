//
// Created by Семён Чубенко on 24.11.2021.
//

#ifndef TEXTEDITOR_ERASESTARSMENURENDER_H
#define TEXTEDITOR_ERASESTARSMENURENDER_H

#include "SFML/Graphics.hpp"
#include "EraseStarsMenuModel.h"

class EraseStarsMenuRender : public sf::Drawable, public sf::Transformable {
private:
    EraseStarsMenuModel* m_model;
    sf::RenderWindow m_window;
    sf::Font font;
    int window_x, window_y;
public:
    EraseStarsMenuRender(EraseStarsMenuModel* model);
    sf::RenderWindow& window() { return m_window; };

    void Init();
    void Render();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};


#endif //TEXTEDITOR_ERASESTARSMENURENDER_H
