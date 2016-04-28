/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_and_y.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/23 20:06:05 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/24 13:06:00 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int			ft_size_x(char *str)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			x++;
		}
		i++;
	}
	return (x);
}

int			ft_size_y(char *str)
{
	int y;
	int k;

	k = 0;
	y = 0;
	while (str[k] != '\n')
		k++;
	k++;
	while (str[k] != '\n')
	{
		y++;
		k++;
	}
	return (y);
}
