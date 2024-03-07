#pragma once
#include "Player.h"

class Human : public Player {
public:
    Human(const std::string& name);
    Move* makeMove() override;
};
