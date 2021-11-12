//
// Created by Семён Чубенко on 12.11.2021.
//

#ifndef TEXTEDITOR_ERASELINEMENURENDER_H
#define TEXTEDITOR_ERASELINEMENURENDER_H

#include "SFML/Graphics.hpp"
#include "EraseLineMenuModel.h"

class EraseLineMenuRender : public sf::Drawable, public sf::Transformable {
private:
    EraseLineMenuModel* m_model;
    sf::RenderWindow m_window;
    sf::Font font;
    int window_x, window_y;
public:
    EraseLineMenuRender(EraseLineMenuModel* model);
    sf::RenderWindow& window() { return m_window; };

    void Init();
    void Render();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};


#endif //TEXTEDITOR_ERASELINEMENURENDER_H
