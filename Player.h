#pragma once
#include <string>

class Move;

class Player {
public:
    Player(const std::string& name);
    virtual Move* makeMove() = 0;
    std::string getName() const;

private:
    std::string name;
};
