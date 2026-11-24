# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/23 15:57:44 by anunes-o          #+#    #+#              #
#    Updated: 2026/11/23 15:57:47 by anunes-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := replace
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
SRC := main.cpp
OBJS := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: $(NAME)
	sh ./tests/test_replace.sh ./$(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all test clean fclean re