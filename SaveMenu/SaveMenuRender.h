//
// Created by Семён Чубенко on 30.10.2021.
//

#ifndef TEXTEDITOR_SAVEMENURENDER_H
#define TEXTEDITOR_SAVEMENURENDER_H

#include "SFML/Graphics.hpp"
#include "SaveMenuModel.h"


class SaveMenuRender : public sf::Drawable, public sf::Transformable {
private:
    SaveMenuModel* m_model;
    sf::RenderWindow m_window;
    sf::Font font;
    int window_x, window_y;
public:
    SaveMenuRender(SaveMenuModel* model);
    sf::RenderWindow& window() { return m_window; };

    void Init();
    void Render();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};


#endif //TEXTEDITOR_SAVEMENURENDER_H
