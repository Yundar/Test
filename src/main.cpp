#include "Launcher.h"

#include <ctime> // time()
#include <cstdlib> // rand(), srand()
#include <string>


int main() {
    srand(time(0));

    Launcher launcher;

    do {
        launcher.mainMenu();
    } while (launcher.exitMenu());

    return 0;
}

// "${file}"

