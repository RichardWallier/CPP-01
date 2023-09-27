#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    	Zombie	*zlist;

	zlist = new Zombie[N];

	for (int i = 0; i < N; i++)
		zlist[i].setName(name);
	return (zlist);
}
