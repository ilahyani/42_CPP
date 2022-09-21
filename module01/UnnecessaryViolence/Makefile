SRC = main.cpp Weapon.hpp Weapon.cpp HumanA.hpp HumanA.cpp HumanB.hpp HumanB.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror

NAME = violence

HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp

all:	$(NAME)

$(NAME): $(OBJ) $(HEADERS)
			$(CC) $(CFLAGS) $(OBJ) -std=c++98 -o $(NAME)

%.o: %.c	$(HEADERS)
			$(CC) (CFLAGS) -std=c++98 -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all