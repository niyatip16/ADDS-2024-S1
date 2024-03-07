#include "Computer.h"
#include "Move.h"
#include <cstdlib> 
Computer::Computer(const std::string& name) : Player(name) {}

Move* Computer::makeMove() {
    const std::string moves[] = {"Rock", "Paper", "Scissors", "Robot", "Monkey", "Pirate", "Ninja", "Zombie"};
    int randomIndex = rand() % 8;

    return new Move(moves[randomIndex]);
}
