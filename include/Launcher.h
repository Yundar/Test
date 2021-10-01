#ifndef LAUNCHER_H
#define LAUNCHER_H

#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/RenderWindow.hpp>



class Launcher {
private:
    sf::Texture singlePlayerTexture;
    sf::Texture multiplayerTexture;
    sf::Texture exitTexture;

    sf::Sprite singePlayer;
    sf::Sprite multiplayer;
    sf::Sprite exit;

    sf::RenderWindow window;

    bool isMenu;
    int menuNum;

    sf::RenderWindow *window;

public:
    void menu();
}
