# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 18:41:03 by ensebast          #+#    #+#              #
#    Updated: 2022/12/16 20:50:18 by ensebast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98 -Iinclude -g

NAME := fixedPoint
SRC := Fixed_arithmetic.cpp Fixed_comparison.cpp Fixed.cpp main.cpp

OBJ := $(SRC:cpp=o)

DIR_OBJ := ./obj/
OBJ_M := $(addprefix $(DIR_OBJ), $(OBJ))

VPATH := ./src/

all: $(OBJ_M) $(NAME)

$(DIR_OBJ)%.o: %.cpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJ_M)
	$(CC) $(CFLAGS) $(OBJ_M) -o $(NAME)

re: clean $(NAME)

clean:
	rm -rf $(NAME)
	rm -rf $(DIR_OBJ)
