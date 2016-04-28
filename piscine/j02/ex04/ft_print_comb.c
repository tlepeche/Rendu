/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/04 01:16:54 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/04 23:25:51 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c)

void	ft_affi(int a, int b, int c)
{
	if (b >= c || a >= b || a == c)
	{
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a == 55 && b == 56 && c == 57)
		{
		ft_putchar(10);
		}
		else
		{	
		ft_putchar(44);
		ft_putchar(32);
		}
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 48;
	b = 48;
	c = 48;
	while (a < 58)
	{
		while (b < 58)
		{
			while (c < 58)
			{
				ft_affi(a, b, c);
				c++;
			}
			b++;
			c = 48;
		}
		b = 48;
		a++;
	}
}
