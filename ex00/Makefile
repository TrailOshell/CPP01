# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/08 00:05:10 by tsomchan          #+#    #+#              #
#    Updated: 2025/07/08 00:05:41 by tsomchan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	Zombie

INC				=	Zombie.hpp
SRCS			=	main.cpp \
					newZombie.cpp \
					randomChump.cpp \
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