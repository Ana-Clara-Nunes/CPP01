# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/13 14:48:13 by anunes-o          #+#    #+#              #
#    Updated: 2026/11/23 14:10:31 by anunes-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := zombies
CXX  := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRC  := main.cpp Zombie.cpp zombieHorde.cpp

OBJS := $(SRC:.cpp=.o)

# **************************************************************************** #
#                                   RULES                                      #
# **************************************************************************** #

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;32m✅ zombies created successfully!\033[0m"
	
%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "\033[1;33mObject removed.\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[1;31mBinary removed.\033[0m"

re: fclean all

.PHONY: all clean fclean re