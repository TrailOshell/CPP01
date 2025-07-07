# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/29 20:33:45 by tsomchan          #+#    #+#              #
#    Updated: 2025/05/05 16:20:25 by tsomchan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	Zombie

INC				=	Zombie.hpp
SRCS			=	main.cpp \
					zombieHorde.cpp \
					Zombie.cpp
OBJS			=	$(SRCS:%.cpp=%.o)

C++				=	c++
C++FLAGS		=	-std=c++98 -Werror -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(C++) $(C++FLAGS) $(OBJS) -I$(INC) -o $(NAME)

%.o: %.cpp Makefile $(INC)
	$(C++) $(C++FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	rm -f $(D_OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f $(D_NAME)

re: fclean all

.PHONY: all clean fclean re

t: $(NAME)
	./$(NAME)

D_NAME		=	Zombie_debug
D_OBJS		=	$(SRCS:%.cpp=%_d.o)
DFLAGS		=	-D DEBUG_MODE=1

$(D_NAME): $(D_OBJS)
	$(C++) $(C++FLAGS) $(DFLAGS) $(D_OBJS) -I$(INC) -o $(D_NAME)

%_d.o: %.cpp Makefile $(INC)
	$(C++) $(C++FLAGS) $(DFLAGS) -c $< -o $@

d: $(D_NAME)
	./$(D_NAME)

val: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

val_d: $(D_NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(D_NAME)

.PHONY: t d val val_d