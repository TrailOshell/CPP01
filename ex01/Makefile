# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/08 00:06:06 by tsomchan          #+#    #+#              #
#    Updated: 2025/07/08 01:50:16 by tsomchan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	Zombie

INC				=	Zombie.hpp

SRCS			=	main.cpp \
					zombieHorde.cpp \
					Zombie.cpp

OBJS_PTH		=	obj/
OBJS			=	$(SRCS:%.cpp=%.o)

C++				=	c++
C++FLAGS		=	-std=c++98 -Werror -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(C++) $(C++FLAGS) $(OBJS) -I$(INC) -o $(NAME)

$(OBJS_PTH)%.o: %.cpp Makefile $(INCS) | $(OBJS_PTH)
	$(C++) $(C++FLAGS) -c $< -o $@
$(OBJS_PTH):
	mkdir -p $(OBJS_PTH)

clean:
	rm -f $(OBJS)
	rm -f $(D_OBJS)
	rm -rf $(OBJS_PTH)

fclean: clean
	rm -f $(NAME)
	rm -f $(D_NAME)

re: fclean all

.PHONY: all clean fclean re

t: $(NAME)
	./$(NAME)

D_NAME		=	$(addprefix $(NAME), _debug)
D_OBJS		=	$(SRCS:%.cpp=%_d.o)
DFLAGS		=	-D DEBUG_MODE=1

$(D_NAME): $(D_OBJS)
	$(C++) $(C++FLAGS) $(DFLAGS) $(D_OBJS) -I$(INC) -o $(D_NAME)

$(OBJS_PTH)%_d.o: %.cpp Makefile $(INC) | $(OBJS_PTH)
	$(C++) $(C++FLAGS) $(DFLAGS) -c $< -o $@

d: $(D_NAME)
	./$(D_NAME)

val: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

val_d: $(D_NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(D_NAME)

.PHONY: t d val val_d