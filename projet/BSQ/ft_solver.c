/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/24 11:08:26 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/24 20:15:10 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_data	ft_initiate(t_data cookie)
{
	cookie.check = 0;
	cookie.arret = 0;
	cookie.lg_sq = 0;
	cookie.lg_sq_prec = 0;
	cookie.position = -1;
	return (cookie);
}

int		ft_solver(char **tab, int x, int y, char *buf)
{
	t_data	cookie;
	int		i;
	int		j;

	cookie = ft_initiate(cookie);
	cookie = ft_determine_obs(cookie, buf);
	while (cookie.position++ < (x) * (y + 1))
	{
		i = cookie.position / (y + 1);
		j = cookie.position % (y + 1);
		if ((tab[i][j - 1] == '\0' && tab[i][j] == '\0'))
			break ;
		if ((tab[i][j] != cookie.non_obstacle) || (tab[i][j] == '\0'))
			cookie.position++;
		cookie = ft_test(tab, i, j, cookie);
		if (cookie.lg_sq > cookie.lg_sq_prec)
			cookie.lg_sq_prec = cookie.lg_sq;
	}
	if (cookie.check != 0 &&
			ft_check_map(tab, x) && ft_check_char(tab, x, cookie))
	{
		tab = print_square(tab, cookie);
		return (1);
	}
	return (0);
}
