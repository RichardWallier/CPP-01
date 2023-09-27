#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::Weapon(std::string type): type(type) {}

Weapon::Weapon(Weapon &weapon) {
  this->type = weapon.type;
}

Weapon::~Weapon(void) {}

void Weapon::setType(std::string type) { this->type = type; }

const std::string &Weapon::getType(void) {
  std::string &Ref = this->type;
  return Ref;
}

