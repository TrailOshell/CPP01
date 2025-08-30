# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/08 01:38:23 by tsomchan          #+#    #+#              #
#    Updated: 2025/08/30 17:39:52 by tsomchan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	replacer

INC				=	.

INCS			=	main.hpp

SRCS			=	main.cpp

OBJS_PTH		=	obj/
OBJS			=	$(SRCS:%.cpp=$(OBJS_PTH)%.o)

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
	rm -f $(TEST_FILE)
	rm -f $(TEST_FILE_R)

re: fclean all

.PHONY: all clean fclean re

TEST_FILE	= SED
TEST_FILE_R	= $(addprefix $(TEST_FILE), .replace)

t: $(NAME)
	@touch $(TEST_FILE)
	@echo "Bake Cake Bake Cake Bake Cake Bake Cake Bake Cake Bake Cake" > $(TEST_FILE)
	./$(NAME) $(TEST_FILE) Cake Lake
	-diff $(TEST_FILE) $(TEST_FILE_R)

D_NAME		=	$(addprefix $(NAME), _debug)
D_OBJS		=	$(SRCS:%.cpp=$(OBJS_PTH)%_d.o)
DFLAGS		=	-D DEBUG_MODE=1

$(D_NAME): $(D_OBJS)
	$(C++) $(C++FLAGS) $(DFLAGS) $(D_OBJS) -I$(INC) -o $(D_NAME)

$(OBJS_PTH)%_d.o: %.cpp Makefile $(INCS) | $(OBJS_PTH)
	$(C++) $(C++FLAGS) $(DFLAGS) -c $< -o $@

d: $(D_NAME)
	./$(D_NAME)

VFLAGS		=	--leak-check=full --show-leak-kinds=all

val: $(NAME)
	valgrind $(VFLAGS) ./$(NAME)

val_d: $(D_NAME)
	valgrind $(VFLAGS) ./$(D_NAME)

.PHONY: t d val val_d