/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/24 11:10:02 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/24 20:18:53 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_check_map(char **tab, int x)
{
	int i;
	int line_one;
	int k;

	i = 0;
	line_one = 0;
	while (tab[i][line_one] != '\0')
		line_one++;
	i++;
	while (i < x - 1)
	{
		k = 0;
		while (tab[i][k] != '\0')
			k++;
		if (k != line_one)
			return (0);
		i++;
	}
	return (1);
}

char	**create_tab(char *buf)
{
	int		x;
	int		y;
	int		j;
	char	**tab;

	x = ft_size_x(buf);
	y = ft_size_y(buf);
	tab = (char **)malloc(sizeof(char*) * (x + 1));
	if (!tab)
		return (0);
	j = 0;
	while (j < x)
	{
		tab[j] = (char *)malloc(sizeof(char) * (y + 1));
		j++;
	}
	tab = ft_construct_tab(buf, x, tab);
	if (ft_solver(tab, x, y, buf) == 0)
		ft_putstr("map error\n");
	else
		ft_printtab(tab, x);
	return (tab);
}

char	**file_opener(int ac, char *av, char **tab)
{
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		fd;

	(void)ac;
	fd = open(av, O_RDONLY);
	if (fd == -1)
		ft_putstr("map error\n");
	else
	{
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		tab = create_tab(buf);
	}
	return (tab);
}

char	**ft_file_zero(char **tab)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	ret = read(0, buf, BUF_SIZE);
	buf[ret] = '\0';
	tab = create_tab(buf);
	return (tab);
}

int		main(int ac, char **av)
{
	char	**tab;
	int		i;

	i = 1;
	tab = NULL;
	if (ac == 1)
		ft_file_zero(tab);
	else
	{
		while (i < ac)
		{
			tab = file_opener(ac, av[i], tab);
			i++;
		}
	}
	free(tab);
	return (0);
}
