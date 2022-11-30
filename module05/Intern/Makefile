SRC = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

NAME = Intern

HEADERS = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

all:	$(NAME)

$(NAME): $(OBJ) $(HEADERS)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all