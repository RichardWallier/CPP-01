SOURCE	= main.cpp

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror
CPPFLAGS=	-std=c++98

RM		=	rm -rf

NAME	=	sed

all: $(NAME)

$(NAME): $(SOURCE)
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(SOURCE) -o $(NAME)
	@echo "$(NAME) compiled"

fclean:
	@$(RM) $(NAME)
