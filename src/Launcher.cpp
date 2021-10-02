#include "Launcher.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>


Launcher::Launcher(bool playAgain){

	bool again = playAgain;


	


    singlePlayerTexture.loadFromFile("./media/SinglePlayer.png");
    multiplayerTexture.loadFromFile("./media/Multiplayer.png");
    exitTexture.loadFromFile("./media/Exit.png");

    singePlayer.setTexture(singlePlayerTexture);
    multiplayer.setTexture(multiplayerTexture);
    exit.setTexture(exitTexture);

	singePlayer.setPosition(100, 160);
	multiplayer.setPosition(100, 220);
	exit.setPosition(100, 280);

    isMenu = 1;

    // menu();
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

char Launcher::menu(){
	char answer;
	sf::RenderWindow window(sf::VideoMode({510, 510}), "Quoridor");
   	window.clear(sf::Color(0x80, 0x80, 0x0));
    while (isMenu)
	{
		singePlayer.setColor(sf::Color(0x80, 0x80, 0x0));
		multiplayer.setColor(sf::Color(0x80, 0x80, 0x0));
		exit.setColor(sf::Color(0x80, 0x80, 0x0));
		menuNum = 0;
		// ::White

 
		if (sf::IntRect(100, 160, 229, 43).contains(sf::Mouse::getPosition(window))) { singePlayer.setColor(sf::Color::Red); menuNum = 1; }
		if (sf::IntRect(100, 220, 207, 41).contains(sf::Mouse::getPosition(window))) { multiplayer.setColor(sf::Color::Red); menuNum = 2; }
		if (sf::IntRect(100, 280, 72, 37).contains(sf::Mouse::getPosition(window))) { exit.setColor(sf::Color::Red); menuNum = 3; }
 
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (menuNum == 1) { isMenu = false; answer = "s"; return answer }
			if (menuNum == 2) { isMenu = false; answer = "m"; return answer }
			if (menuNum == 3)  { window.close(); isMenu = false; }
 
		}
 
		window.draw(singePlayer);   
		window.draw(multiplayer);
		window.draw(exit);
		
		window.display();
	}
}

char Launcher::oneMore(){
	bool isOneMore = 1;
	sf::RenderWindow window(sf::VideoMode({510, 510}), "Quoridor");
   	window.clear(sf::Color(0x80, 0x80, 0x0));
    while (isMenu)
	{
		singePlayer.setColor(sf::Color(0x80, 0x80, 0x0));
		multiplayer.setColor(sf::Color(0x80, 0x80, 0x0));
		exit.setColor(sf::Color(0x80, 0x80, 0x0));
		menuNum = 0;
		// ::White

 
		if (sf::IntRect(100, 160, 229, 43).contains(sf::Mouse::getPosition(window))) { singePlayer.setColor(sf::Color::Red); menuNum = 1; }
		if (sf::IntRect(100, 220, 207, 41).contains(sf::Mouse::getPosition(window))) { multiplayer.setColor(sf::Color::Red); menuNum = 2; }
		if (sf::IntRect(100, 280, 72, 37).contains(sf::Mouse::getPosition(window))) { exit.setColor(sf::Color::Red); menuNum = 3; }
 
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (menuNum == 1) isOneMore = false;
			if (menuNum == 2) { isOneMore = false; }
			if (menuNum == 3)  { window.close(); isOneMore = false; }
 
		}
 
		window.draw(singePlayer);   
		window.draw(multiplayer);
		window.draw(exit);
		
		window.display();
	}
}