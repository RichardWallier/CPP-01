#include "Zombie.hpp"

Zombie::Zombie(void) {
  return ;
}

Zombie::~Zombie(void) {
  std::cout << this->name << " was defeated!" << std::endl;
}

void Zombie::announce(void) {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl ;
}

void Zombie::setName(std::string name) {
  this->name = name;
}
