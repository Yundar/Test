#include "Game.h"
#include "View.h"
#include "Controller.h"

#include <ctime> // time()
#include <cstdlib> // rand(), srand()
#include <string>

void single(const char* firstName, const char* secondName);

int main() {
    srand(time(0));

    std::cout << "What collor you want to play? white/black" << std::endl;
    std::string answer;
    std::cin >> answer;

    if (answer == "white" || answer == "black"){
        single("white", "black", answer);
    }
    
    
    

    return 0;
}

void single(const char* firstName, const char* secondName, std::string answer) {
    Player fp(mapSize/2, mapSize-1, firstName);
    Bot sp(mapSize/2, 0, secondName);

    Game game(fp, sp);
    if (answer == "black"){
        Game game(sp, fp);
    }
    View view(&game);
    Controller controller(&game);
    controller.start();
}
