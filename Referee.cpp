#include "Referee.h"
#include "Player.h"
#include "Move.h"
#include <iostream>

Referee::Referee() {}

bool Referee::isPlayer1WinningMove(const Move* move1, const Move* move2) const {
    return true;
}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if (isPlayer1WinningMove(move1, move2)) {
        std::cout << player1->getName() << " wins!" << std::endl;
        return player1;
    } else {
        std::cout << player2->getName() << " wins!" << std::endl;
        return player2;
    }
}
