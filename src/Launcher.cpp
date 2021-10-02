#include "Launcher.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>


Launcher::Launcher(bool playAgain){

	bool again = playAgain;

    window.create(sf::VideoMode({510, 510}), "Quoridor");

    window.clear(sf::Color(0x80, 0x80, 0x0));
	


    singlePlayerTexture.loadFromFile("./media/SinglePlayer.png");
    multiplayerTexture.loadFromFile("./media/Multiplayer.png");
    exitTexture.loadFromFile("./media/Exit.png");

    singePlayer.setTexture(singlePlayerTexture);
    multiplayer.setTexture(multiplayerTexture);
    exit.setTexture(exitTexture);

	singePlayer.setPosition(100, 30);
	multiplayer.setPosition(100, 90);
	exit.setPosition(100, 150);

    isMenu = 1;

    menu();
}

// void Launcher::update(){
// 	while (isMenu)
// 	{

// 		singePlayer.setColor(sf::Color::White);
// 		multiplayer.setColor(sf::Color::White);
// 		exit.setColor(sf::Color::White);
// 		menuNum = 0;

 
// 		if (sf::IntRect(100, 30, 300, 50).contains(sf::Mouse::getPosition(window))) { singePlayer.setColor(sf::Color::Blue); menuNum = 1; }
// 		if (sf::IntRect(100, 90, 300, 50).contains(sf::Mouse::getPosition(window))) { multiplayer.setColor(sf::Color::Blue); menuNum = 2; }
// 		if (sf::IntRect(100, 150, 300, 50).contains(sf::Mouse::getPosition(window))) { exit.setColor(sf::Color::Blue); menuNum = 3; }
 
// 		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
// 		{
// 			if (menuNum == 1) isMenu = false;
// 			if (menuNum == 2) { isMenu = false; }
// 			if (menuNum == 3)  { window.close(); isMenu = false; }
 
// 		}
 
// 		window.draw(singePlayer);   
// 		window.draw(multiplayer);
// 		window.draw(exit);
		
// 		window.display();
// 	}
// }

void Launcher::menu(){
    while (isMenu)
	{
		singePlayer.setColor(sf::Color::White);
		multiplayer.setColor(sf::Color::White);
		exit.setColor(sf::Color::White);
		menuNum = 0;

 
		if (sf::IntRect(100, 30, 229, 43).contains(sf::Mouse::getPosition(window))) { singePlayer.setColor(sf::Color::Blue); menuNum = 1; }
		if (sf::IntRect(100, 90, 207, 41).contains(sf::Mouse::getPosition(window))) { multiplayer.setColor(sf::Color::Blue); menuNum = 2; }
		if (sf::IntRect(100, 150, 72, 37).contains(sf::Mouse::getPosition(window))) { exit.setColor(sf::Color::Blue); menuNum = 3; }
 
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (menuNum == 1) isMenu = false;
			if (menuNum == 2) { isMenu = false; }
			if (menuNum == 3)  { window.close(); isMenu = false; }
 
		}
 
		window.draw(singePlayer);   
		window.draw(multiplayer);
		window.draw(exit);
		
		window.display();
	}
}