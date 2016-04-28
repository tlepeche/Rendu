/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/04 04:26:51 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/23 16:38:32 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c,1);
}

void	ft_fin(int ab, int cd)
{
	if (ab == 99 && cd == 99)
	{
		ft_putchar(10);
	}
	else
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_if(int a, int b, int c, int d)
{
	int ab;
	int cd;

	ab = a * 10 + b;
	cd = c * 10 + d;
	if (cd <= ab)
	{
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(32);
		ft_putchar(c);
		ft_putchar(d);
		ft_fin(ab, cd);
	}
}

void	ft_boucle(int a, int b, int c, int d)
{
	while (d <= 57)
	{
		ft_if(a, b, c, d);
		d++;
	}
}

int	main(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 48;
	b = 48;
	c = 48;
	d = 48;
	while (a <= 57)
	{
		while (b <= 57)
		{
			while (c <= 57)
			{
				ft_boucle(a, b, c, d);
				d = 48;
				c++;
			}
			c = 48;
			b++;
		}
		b = 48;
		a++;
	}
	return (0);
}
