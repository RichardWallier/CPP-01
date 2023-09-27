SOURCE	= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror
CPPFLAGS=	-std=c++98

RM		=	rm -rf

NAME	=	brain

all: $(NAME)

$(NAME): $(SOURCE)
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(SOURCE) -o $(NAME)
	@echo "$(NAME) compiled"

fclean:
	@$(RM) $(NAME)
