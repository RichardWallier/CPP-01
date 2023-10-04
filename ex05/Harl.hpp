#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string.h>

enum	e_harl
{
	MAX_FUNCTIONS = 4
};

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);
	private:
		std::string		str_list[4];
		void 			(Harl::*f[4])(void) const;
		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;
};

#endif
