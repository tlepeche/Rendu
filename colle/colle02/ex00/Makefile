# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/07/20 23:16:56 by tlepeche          #+#    #+#              #
#    Updated: 2014/07/20 23:35:58 by edgaunt          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= colle-02

SRC= fonction.c ft_print.c read.c

OBJ= fonction.o ft_print.o read.o

CC= gcc

FLAGS= -Wextra -Wall -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

$(OBJ):
	$(CC) $(FLAGS) -c $(SRC) f_list.h

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f f_list.h.gch
re: fclean all
