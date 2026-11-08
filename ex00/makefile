CC		= c++
CCFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS	= main.cpp ClapTrap.cpp
OBJS	= $(SRCS:.cpp=.o)
NAME	= ClapTrap

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp ClapTrap.hpp
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean