#include "Game.h"
#include "View.h"
#include "Controller.h"

#include <ctime> // time()
#include <cstdlib> // rand(), srand()
#include <string>

void singleWhite(const char* firstName, const char* secondName);
void singleBlack(const char* firstName, const char* secondName);

int main() {
    srand(time(0));

    std::cout << "What collor you want to play? white/black" << std::endl;
    std::string answer;
    std::cin >> answer;

    if (answer == "white"){
        singleWhite("white", "black");
    } else if (answer == "black"){
        singleBlack("black", "white");
    }
    
    
    

    return 0;
}

void singleBlack(const char* firstName, const char* secondName) {
    Player fp(mapSize/2, 0, firstName);
    Bot sp(mapSize/2, mapSize-1, secondName);

    Game game(sp, fp);
    View view(&game);
    Controller controller(&game);
    controller.start();
}

void singleWhite(const char* firstName, const char* secondName) {
    Player fp(mapSize/2, mapSize-1, firstName);
    Bot sp(mapSize/2, 0, secondName);

    Game game(fp, sp);
    View view(&game);
    Controller controller(&game);
    controller.start();
}
