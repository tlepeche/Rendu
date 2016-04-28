/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/13 15:44:27 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/13 22:16:05 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putnbr(int *str);
int		checking(int **tab, int location);

int		**init(char **argv, int **tab)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i + 1][j] == '.')
				tab[i][j] = -1;
			else if (argv[i + 1][j] >= '1' && argv[i + 1][j] <= '9')
				tab[i][j] = argv[i + 1][j] - '0';
			else
			{
				write (1, "Erreur\n", 7);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (tab);
}

int		error(int i, int j, char **argv, int argc)
{
	if (argc != 10)
	{
		write (1, "Erreur\n", 7);
		return (1);
	}
	else
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
				j++;
			if (j != 9)
			{
				write (1, "Erreur\n", 7);
				return (1);
			}
			i++;
		}
	}
	return (0);
}

int		**allocate_tab(void)
{
	int	i;
	int	**tab;

	i = 0;
	tab = (int **)malloc(sizeof(int *) * 9);
	if (!tab)
		return (0);
	while (i < 9)
	{
		tab[i] = (int *)malloc(sizeof(int) * 9);
		if (!tab[i])
			return (0);
		i++;
	}
	return (tab);
}

int		main(int argc, char **argv)
{
	int x;
	int	**tab;

	tab = allocate_tab();
	if (error(1, 0, argv, argc) == 0)
	{
		tab = init(argv, tab);
		if (*init(argv, tab) != 0)
		{
			checking(tab, 0);
			x = 0;
			while (x < argc - 1)
			{
				ft_putnbr(tab[x]);
				ft_putchar('\n');
				x++;
			}
			free(tab);
		}
	}
	return (0);
}
