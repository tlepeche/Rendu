/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/13 15:36:20 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/13 20:32:51 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int *str)
{
	int b;

	b = 0;
	while (b < 9)
	{
		if (str[b] > 0)
		{
			ft_putchar(str[b] + 48);
			if (b < 8)
				ft_putchar(' ');
		}
		else
		{
			ft_putchar('.');
			if (b < 8)
				ft_putchar(' ');
		}
		b++;
	}
}
