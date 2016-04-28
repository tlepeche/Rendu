/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/15 22:25:11 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/15 23:31:50 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

struct s_stock_par *ft_param_to_tab(int ac, char **av)
{
	t_point	a;
	int		i;
	int		j;
	
	i = 0;
	a.tab = (struct)malloc(sizeof(int) * argc + 1);
	while (i <= ac)
	{
		a[i].copy = (char *)malloc(sizeof(char) * av[i] + 1);
		j = 0;
		while (av[i][j] != '\0')
		{
			a[i][j].copy = av[i][j];
			j++;
		}
		a[i][j].copy = '\0';
		a[i].size_param = j;
		a[i].str = &av[i];
		a[i].tab = (char **)malloc(sizeof(char *) * j);
		a[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	a.tab[i] = '0';
	return (a);
}
