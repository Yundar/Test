#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Game.h"
#include "View.h"
#include <SFML/Graphics/RenderWindow.hpp>

class Controller {
private:
    Game *m_model;
    View *m_view;

    sf::RenderWindow window;

public:
    Controller(Game *model, View *view);
    ~Controller() = default;

    void start();
};

#endif // CONTROLLER_H