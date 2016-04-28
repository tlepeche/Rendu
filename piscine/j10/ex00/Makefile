# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/07/15 13:14:00 by tlepeche          #+#    #+#              #
#    Updated: 2014/07/15 15:20:55 by tlepeche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
	
SRC= srcs/ft_putstr.c srcs/ft_putchar.c srcs/ft_swap.c \
	srcs/ft_strlen.c srcs/ft_strcmp.c 

CMP= ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

all: $(NAME)

$(NAME): $(CMP)
	ar rc $(NAME) $(CMP) 

$(CMP):
	gcc -c $(SRC) -Wall -Werror -Wextra 

clean:
	rm -f $(CMP)

fclean: clean
	rm -f $(NAME)

re: fclean all
