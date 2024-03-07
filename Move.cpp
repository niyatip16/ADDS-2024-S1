#include "Move.h"

Move::Move(const std::string& name) : name(name) {}

std::string Move::getName() const {
    return name;
}
