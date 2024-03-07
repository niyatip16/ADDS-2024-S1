#pragma once
#include "Player.h"

class Computer : public Player {
public:
    Computer(const std::string& name);
    Move* makeMove() override;
};
