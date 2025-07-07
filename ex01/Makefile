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

NAME			=	zombie

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

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

t: $(NAME)
	./$(NAME)

.PHONY: t