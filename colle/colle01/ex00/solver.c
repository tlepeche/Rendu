/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/13 15:40:58 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/13 20:32:50 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int check_y(int **tab, int nb, int x, int y)
{
	y = 0;
	while (y < 9)
	{
		if (tab[x][y] == nb)
			return (0);
		y++;
	}
	return (1);
}

int check_x(int **tab, int nb, int x, int y)
{
	x = 0;
	while (x < 9)
	{
		if (tab[x][y] == nb)
			return (0);
		x++;
	}
	return (1);
}

int check_3x3(int **tab, int nb, int x, int y)
{
	int		x2;
	int		y2;

	x2 = x - (x % 3);
	y2 = y - (y % 3);
	x = x2;
	y = y2;
	while (x < (x2 + 3))
	{
		while (y < (y2 + 3))
		{
			if (tab[x][y] == nb)
				return (0);
			y++;
		}
		y = y2;
		x++;
	}
	return (1);
}

int checking(int **tab, int location)
{
	int x;
	int y;
	int nb;

	if (location == 81)
		return (1);
	x = location / 9;
	y = location % 9;
	if (tab[x][y] != -1)
		return (checking(tab, location + 1));
	nb = 1;
	while (nb <= 9)
	{
		if ((check_x(tab, nb, x, y) == 1) &&
				(check_y(tab, nb, x, y) == 1) &&
				(check_3x3(tab, nb, x, y) == 1))
		{
			tab[x][y] = nb;
			if (checking(tab, location + 1) == 1)
				return (1);
		}
		nb++;
	}
	tab[x][y] = -1;
	return (0);
}
