#include "Human.h"
#include "Move.h"
#include <iostream>

Human::Human(const std::string& name) : Player(name) {}

Move* Human::makeMove() {
    std::string moveName;
    std::cout << getName() << ", enter your move: ";
    std::cin >> moveName;

    return new Move(moveName);
}
