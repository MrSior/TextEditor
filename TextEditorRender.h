//
// Created by Семён Чубенко on 25.10.2021.
//

#ifndef TEXTEDITOR_TEXTEDITORRENDER_H
#define TEXTEDITOR_TEXTEDITORRENDER_H

#include "SFML/Graphics.hpp"
#include "TextEditorModel.h"

class TextEditorRender : public sf::Drawable, public sf::Transformable{
private:
    TextEditorModel* m_model;
    sf::RenderWindow m_window;
    sf::Font font;
    float y_scrolled, x_scrolled;
    int window_x, window_y;
public:
    TextEditorRender(TextEditorModel* model);
    sf::RenderWindow& window() { return m_window; };

    void Init();
    void Render();
    sf::Vector2f getWindowSize();
    float getX_scrolled();
    float getY_scrolled();
    void setX_scrolled(float value);
    void setY_scrolled(float value);
    void checkCursorPosition(std::string keyPressed);
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
    void changeWindowSize(int width, int height);
};

#endif //TEXTEDITOR_TEXTEDITORRENDER_H
