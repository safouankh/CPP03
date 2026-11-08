CC		= c++
CCFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS	= ClapTrap.cpp    ScavTrap.cpp    main.cpp
OBJS	= $(SRCS:.cpp=.o)
NAME	= ScavTrap

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp ScavTrap.hpp
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean