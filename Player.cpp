#include "Player.h"
#include "Move.h"

Player::Player(const std::string& name) : name(name) {}

std::string Player::getName() const {
    return name;
}
