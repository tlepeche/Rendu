/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/06 16:48:20 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/06 17:05:36 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_ligne1(int x, int colonne)
{
	ft_putchar('A');
	colonne++;
	while (colonne <= x)
	{
		if (colonne < x)
		{
			ft_putchar('B');
			colonne++;
		}
		else
		{
			ft_putchar('A');
			colonne++;
		}
	}
}

void	ft_centre(int x, int colonne)
{
	ft_putchar('B');
	colonne++;
	while (colonne <= x)
	{
		if (colonne < x)
		{
			ft_putchar(' ');
			colonne++;
		}
		else
		{
			ft_putchar('B');
			colonne++;
		}
	}
}

void	ft_dligne(int x, int colonne)
{
	ft_putchar('C');
	colonne++;
	while (colonne <= x)
	{
		if (colonne < x)
		{
			ft_putchar('B');
			colonne++;
		}
		else
		{
			ft_putchar('C');
			colonne++;
		}
	}
}

void	ft_nbligne(int x, int y, int ligne)
{
	while (ligne <= y)
	{
		if (ligne == 1)
		{
			ft_ligne1(x, 1);
			ft_putchar('\n');
			ligne++;
		}
		else
		{
			if (ligne < y)
			{
				ft_centre(x, 1);
				ft_putchar('\n');
				ligne++;
			}
			else
			{
				ft_dligne(x, 1);
				ft_putchar('\n');
				ligne++;
			}
		}
	}
}

void	colle02(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
	}
	else
	{
		ft_nbligne(x, y, 1);
	}
}
