//
// Created by Семён Чубенко on 25.11.2021.
//

#ifndef TEXTEDITOR_COMMANDSMENURENDER_H
#define TEXTEDITOR_COMMANDSMENURENDER_H

#include "SFML/Graphics.hpp"
#include "CommandsMenuModel.h"

class CommandsMenuRender : public sf::Drawable, public sf::Transformable {
private:
    CommandsMenuModel* m_model;
    sf::RenderWindow m_window;
    sf::Font font;
    int window_x, window_y;
public:
    CommandsMenuRender(CommandsMenuModel* model);
    sf::RenderWindow& window() { return m_window; };

    void Init();
    void Render();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};


#endif //TEXTEDITOR_COMMANDSMENURENDER_H
