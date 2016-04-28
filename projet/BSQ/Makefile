# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/07/23 19:47:47 by tlepeche          #+#    #+#              #
#    Updated: 2014/07/24 10:50:29 by tlepeche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= bsq

SRC= ft_putstr.c ft_x_and_y.c ft_print_square.c ft_solver.c\
	 ft_construct_tab.c ft_print_tab.c ft_test.c main.c

OBJ= $(SRC:.c=.o)

CC= gcc

CFLAGS= -Wextra -Werror -Wall

RM= rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ):
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all 
