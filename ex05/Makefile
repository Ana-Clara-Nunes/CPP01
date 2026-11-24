# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/24 13:33:47 by anunes-o          #+#    #+#              #
#    Updated: 2026/11/24 13:33:50 by anunes-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := harl
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
SRC := main.cpp Harl.cpp
OBJS := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Harl.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


