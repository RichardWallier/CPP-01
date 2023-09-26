#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie(std::string);
		Zombie(Zombie const &cpy);
		~Zombie(void);
		Zombie&	operator=(Zombie const &rhs);
    void    announce(void);

  private:
    std::string name;
};

Zombie* newZombie(std::string);
void randomChump(std::string name);
#endif
