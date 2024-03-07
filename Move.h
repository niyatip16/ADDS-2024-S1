#pragma once
#include <string>

class Move {
public:
    Move(const std::string& name);
    std::string getName() const;

private:
    std::string name;
};
