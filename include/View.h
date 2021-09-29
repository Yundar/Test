#ifndef VIEW_H
#define VIEW_H

#include "Game.h"
#include "Observer.h"
#include <SFML/Graphics.hpp>

const int SIZE = 9;
const int FIELD_SIZE = 530;
const int CELL_SIZE = 50;
const int ARRAY_SIZE = 9;

class View : public Observer {
private:
    Game *m_model;

public:
    View(Game *model);
    ~View() = default;

    virtual void update();

    // ! Test function
    // ! Don't use it
    // void drawMap(Board board);

    virtual void draw(sf::RenderTarget& target, sf::RenderStates& states) const;
};

#endif // VIEW_H