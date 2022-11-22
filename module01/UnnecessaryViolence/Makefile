SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

CPPFLAGS = -Wall -Wextra -Werror

NAME = UnnecessaryViolence

HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp

all:	$(NAME)

$(NAME): $(OBJ) $(HEADER)
			$(CC) $(CPPFLAGS) $(OBJ) -std=c++98 -o $(NAME)

%.o: %.cpp	$(HEADER)
			$(CC) $(CPPFLAGS) -std=c++98 -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all
