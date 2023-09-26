#include "Zombie.hpp"

int main(void) {
  Zombie *zombie;

  zombie = newZombie("Rwallier");
  randomChump("Mago Magrao");
  randomChump("Vsergio");
  randomChump("Gsaiago");
  randomChump("Lguedes");
  zombie->announce();
  delete (zombie);
  return (0);
}
