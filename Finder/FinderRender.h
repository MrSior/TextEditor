//
// Created by Семён Чубенко on 31.10.2021.
//

#ifndef TEXTEDITOR_FINDERRENDER_H
#define TEXTEDITOR_FINDERRENDER_H

#include "SFML/Graphics.hpp"
#include "FinderModel.h"

class FinderRender : public sf::Drawable, public sf::Transformable {
private:
    FinderModel* m_model;
    sf::RenderWindow m_window;
    sf::Font font;
    int window_x, window_y;
    float y_scrolled;
public:
    FinderRender(FinderModel* model);
    sf::RenderWindow& window() { return m_window; };

    void Init();
    void Render();
    float getY_scrolled();
    void setY_scrolled(float value);
    void checkCursorPosition(std::string buttonPressed);
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};


#endif //TEXTEDITOR_FINDERRENDER_H
