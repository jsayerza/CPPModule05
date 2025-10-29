NAME = intern

CXX = c++
# CXXFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Flags para debug
DEBUG_FLAGS = -g -fsanitize=address -fsanitize=undefined

SRCS =		main.cpp \
			Bureaucrat.cpp \
			AForm.cpp \
			ShrubberyCreationForm.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp \
			Intern.cpp \
			Tests.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS =	Bureaucrat.hpp \
			AForm.hpp \
			ShrubberyCreationForm.hpp \
			PresidentialPardonForm.hpp \
			RobotomyRequestForm.hpp \
			Intern.hpp \
			Tests.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS) Makefile
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para debug
debug: CXXFLAGS += $(DEBUG_FLAGS)
debug: re

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f *_shrubbery

re: fclean all

.PHONY: all clean fclean re debug

# valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./intern