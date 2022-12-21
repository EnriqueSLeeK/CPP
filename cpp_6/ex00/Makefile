# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 18:41:03 by ensebast          #+#    #+#              #
#    Updated: 2022/12/21 00:02:36 by ensebast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98 -Iinclude

NAME := convert
SRC := main.cpp Number.cpp NumberConvert.cpp NumberPrintHandler.cpp

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
