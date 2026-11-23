# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/23 15:20:26 by anunes-o          #+#    #+#              #
#    Updated: 2026/11/23 15:45:17 by anunes-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := unnecessaryViolence
CXX  := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRC  := main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS := $(SRC:.cpp=.o)

# **************************************************************************** #
#                                   RULES                                      #
# **************************************************************************** #

all : banner $(NAME)

banner:
	@printf "\033[1;34m"; \
	printf '%s\n' \
		'          [UNNECESSARY VIOLENCE]          ' \
		'  ||||||||||||]             ||||||||.....]' \
		'' \
		'       O                         O' \
		'     ~/|~         \__O__/       /|' \
		'      / \            |          / \' \
		'__________________________________________'; \
	printf "\033[0m\n"


$(NAME) : $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;32m✅ unnecessaryViolence created successfully!\033[0m"
	
%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "\033[1;33mObject removed.\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[1;31mBinary removed.\033[0m"

re: fclean all

valgrind:
	valgrind ./zombies
.PHONY: all clean fclean re