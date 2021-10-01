#include "Launcher.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>


Launcher::Launcher(sf::RenderWindow *window){
    sf::RenderWindow window(sf::VideoMode(1376, 768), "Quoridor");

    singlePlayerTexture.loadFromFile("./media/SinglePlayer.png");
    multiplayerTexture.loadFromFile("./media/Multiplayer.png");
    exitTexture.loadFromFile("./media/Exit.png");

    singePlayer.setTexture(singlePlayerTexture);
    multiplayer.setTexture(multiplayerTexture);
    exit.setTexture(exitTexture);

    isMenu = 1;

    menu();
}

void Launcher::menu(){
    
    singePlayer.setPosition(100, 30);
	multiplayer.setPosition(100, 90);
	exit.setPosition(100, 150);

    while (isMenu)
	{
		singePlayer.setColor(Color::White);
		multiplayer.setColor(Color::White);
		exit.setColor(Color::White);
		menuNum = 0;
		window.clear(Color(129, 181, 221));
 
		if (IntRect(100, 30, 300, 50).contains(Mouse::getPosition(window))) { singePlayer.setColor(Color::Blue); menuNum = 1; }
		if (IntRect(100, 90, 300, 50).contains(Mouse::getPosition(window))) { multiplayer.setColor(Color::Blue); menuNum = 2; }
		if (IntRect(100, 150, 300, 50).contains(Mouse::getPosition(window))) { exit.setColor(Color::Blue); menuNum = 3; }
 
		if (Mouse::isButtonPressed(Mouse::Left))
		{
			if (menuNum == 1) isMenu = false;
			if (menuNum == 2) { isMenu = false }
			if (menuNum == 3)  { window.close(); isMenu = false; }
 
		}
 
		window.draw(singePlayer);   
		window.draw(multiplayer);
		window.draw(exit);
		
		window.display();
	}
}