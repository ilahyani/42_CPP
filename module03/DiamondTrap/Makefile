SRC = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

NAME = DiamondTrap

HEADERS = ClapTrap.hpp FragTrap.hpp ScavTrap.hpp DiamondTrap.hpp

all:	$(NAME)

$(NAME): $(OBJ) $(HEADERS)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all