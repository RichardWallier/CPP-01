#include "Zombie.hpp"

int main(void) {
	Zombie	*zlist;
	int	N;

	N = 20;
	zlist = zombieHorde(N, "Gabriel");
	for (int i = 0; i < N; i++) {
		std::cout << "Zumbi No " << i + 1 << ": " << std::endl;
		zlist[i].announce();
	}
	delete [] zlist;
}
