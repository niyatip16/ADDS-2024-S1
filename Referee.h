#pragma once
#include "Player.h"

class Referee {
public:
    Referee();
    Player* refGame(Player* player1, Player* player2);

private:
    bool isPlayer1WinningMove(const Move* move1, const Move* move2) const;
};
