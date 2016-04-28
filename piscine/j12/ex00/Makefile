# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/07/17 15:39:41 by tlepeche          #+#    #+#              #
#    Updated: 2014/07/23 13:56:28 by tlepeche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ft_display_file

CMP= main.o ft_putstr.o

SRC= main.c ft_putstr.c

all: $(NAME)

$(NAME): $(CMP)
	gcc -Wall -Werror -Wextra $(CMP) -o $(NAME)

$(CMP):
	gcc -Wall -Werror -Wextra -c $(SRC)

clean:
	rm -f $(CMP)

fclean: clean
	rm -f $(NAME)

re: fclean all
