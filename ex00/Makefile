# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/08 00:05:10 by tsomchan          #+#    #+#              #
#    Updated: 2025/07/08 01:53:23 by tsomchan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	Zombie

INC				=	Zombie.hpp
SRCS			=	main.cpp \
					newZombie.cpp \
					randomChump.cpp \
					Zombie.cpp

OBJS_PTH		=	obj/
OBJS			=	$(SRCS:%.cpp=$(OBJS_PTH)%.o)

C++				=	c++
C++FLAGS		=	-std=c++98 -Werror -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(C++) $(C++FLAGS) $(OBJS) -I$(INC) -o $(NAME)

$(OBJS_PTH)%.o: %.cpp Makefile $(INC) | $(OBJS_PTH)
	$(C++) $(C++FLAGS) -c $< -o $@
$(OBJS_PTH):
	mkdir -p $(OBJS_PTH)

clean:
	rm -f $(OBJS)
	rm -rf $(OBJS_PTH)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

t: $(NAME)
	./$(NAME)

.PHONY: t