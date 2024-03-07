#include <iostream>
#include "Referee.h"
#include "Human.h"
#include "Computer.h"

int main() {
    Human humanPlayer("Alice");
    Computer computerPlayer("Computer");

    Referee referee;

    Player* winner = referee.refGame(&humanPlayer, &computerPlayer);

    if (winner) {
        std::cout << "The winner is: " << winner->getName() << std::endl;
    } else {
        std::cout << "It's a tie!" << std::endl;
    }

    delete winner;

    return 0;
}
