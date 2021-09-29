#include "View.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

View::View(Game *model) {
    m_model = model;
    m_model->addObserver(this);
}

void View::update() {
    if (m_model->checkGameEnd() == true) {
        std::cout << "Congrats " << m_model->getWinnerName() << std::endl;
    } else {
        std::cout << "Now is " << m_model->getCurrentPlayerName()
                << "\'s move" << std::endl; 
    }
    std::cout << std::endl;

    drawMap(m_model->getBoard());
}

void View::drawMap(Board board) {
    int x1, y1, x2, y2;
    m_model->getFirstPlayerPosition(&x1, &y1);
    m_model->getSecondPlayerPosition(&x2, &y2);

    sf::RenderWindow window(sf::VideoMode({530, 530}), "Quoridor");

    window.clear(sf::Color(0x80, 0x80, 0x0));

    for(float i = 0; i < 17; i++){
        for(float j = 0; j < 17; j++){
            sf::RectangleShape shape1(sf::Vector2f(50, 50));
            shape1.setPosition({i * 70, j * 70});
            shape1.setFillColor(sf::Color(0x80, 0x0, 0x0));
            window.draw(shape1);
        }
    }

    window.display();

    sf::sleep(sf::seconds(15));
    // std::cout << "    ";
    // for (int i = 0; i < mapSize; i++) {
    //     if (i < 10)
    //     std::cout << i << ' ';
    //     else if (i >= 10) 
    //     std::cout << i-10 << ' ';
    // }
    // std::cout << std::endl;
    
    // std::cout << "    ";
    // for (int i = 0; i < mapSize; i++) {
    //     std::cout << '-' << ' ';
    // }
    // std::cout << std::endl;

    // for (int i = 0; i < mapSize; i++) {
    //     if (i < 10)
    //     std::cout << i << ' ' << '|' << ' ';
    //     else if (i >= 10) 
    //     std::cout << i << '|' << ' ';

    //         for (int j = 0; j < mapSize; j++) {
    //             if (x1 == j && y1 == i) {
    //                 std::cout << 'P' << ' ';
    //             } else if (x2 == j && y2 == i) {
    //                 std::cout << 'S' << ' ';
    //             } else {
    //                 int c = board.getTile(j, i);
    //                 if (c == 0) std::cout << ' ';
    //                 else if (c == 1) std::cout << '.';
    //                 else if (c == 2) std::cout << '#';
    //                 std::cout << ' ';
    //             }
    //         }
    //     std::cout << std::endl;
    // }
    // std::cout << std::endl;

    // std::vector<std::pair<int, int>> moves = m_model->getPossibleMoves();

    // std::cout << m_model->getCurrentPlayerName() << " Can move as this: ";
    // for(auto e : moves) {
    //     std::cout << e.first << ' ' << e.second << ' ';
    //     std::cout << '|' << ' ';
    // }

    // std::cout << std::endl;
    // std::cout << std::endl;
}