/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_construct_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/24 10:30:01 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/24 20:15:08 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_check_char(char **tab, int x, t_data cookie)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < x)
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			if (tab[i][j] != cookie.obstacle &&
					tab[i][j] != cookie.non_obstacle &&
					tab[i][j] != '\0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		initiate_k(char *str)
{
	int		k;

	k = 0;
	while (str[k] != '\n')
		k++;
	k++;
	return (k);
}

t_data	ft_determine_obs(t_data cookie, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	i--;
	cookie.plein = str[i];
	i--;
	cookie.obstacle = str[i];
	i--;
	cookie.non_obstacle = str[i];
	return (cookie);
}

char	**ft_construct_tab(char *str, int x, char **tabl)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = initiate_k(str);
	while (i < x - 1)
	{
		j = 0;
		while (str[k] != '\n')
		{
			tabl[i][j] = str[k];
			j++;
			k++;
		}
		tabl[i][j] = '\0';
		i++;
		k++;
	}
	while (j >= 0)
	{
		tabl[i][j] = '\0';
		j--;
	}
	return (tabl);
}
