/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/05 16:56:35 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/06 02:56:43 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void sastantua(int size)
{
	int ligne;
	int nbetoile;
	int espace;
	int etage;

	ligne = 0;
	while (ligne < (size * 3 + (((size - 1) * size) / 2)))
	{
		espace = (size * 3 + (((size - 1) * size) / 2) + 1);
		nbetoile = 0;
		etage = 1;
		while (espace > ligne)
		{
			ft_putchar(' ');
			espace--;
		}
		ft_putchar('/');
		while (nbetoile < (3 + (ligne - 1) * 2))
		{
					ft_putchar('*');
					nbetoile++;
		}
		while (etage <= size)
		{
			if (ligne >= (etage * 3 + (((etage - 1) * etage) / 2)))
			{	
				nbetoile = 2 ;
				while (nbetoile > 0)
				{
				ft_putchar('*');
				nbetoile--;
				}
			}
		etage++;
		}		
		ft_putchar('\\');
		ft_putchar('\n');
		ligne++;
	}
}

int main(void)
{
	sastantua(2);
	return (0);
}
