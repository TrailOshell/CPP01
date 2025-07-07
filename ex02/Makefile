# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/08 00:06:27 by tsomchan          #+#    #+#              #
#    Updated: 2025/07/08 00:06:32 by tsomchan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	BRAIN

SRCS			=	main.cpp
OBJS			=	$(SRCS:%.cpp=%.o)

C++				=	c++
C++FLAGS		=	-std=c++98 -Werror -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(C++) $(C++FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Makefile
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

val: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

.PHONY: t val