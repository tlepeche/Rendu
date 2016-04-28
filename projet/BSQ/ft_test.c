/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/22 12:17:04 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/24 18:34:00 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_data	ft_test2(t_data cookie, int i, int j)
{
	cookie.arret = 1;
	if (cookie.lg_sq > cookie.lg_sq_prec)
	{
		cookie.x = i;
		cookie.y = j;
		cookie.check = 1;
		cookie.lg_sq_prec = cookie.lg_sq;
	}
	return (cookie);
}

t_data	ft_test(char **tab, int i, int j, t_data cookie)
{
	int	jn;
	int	in;

	jn = j;
	in = i;
	while (cookie.lg_sq >= 0)
	{
		while (in <= (i + cookie.lg_sq))
		{
			jn = j;
			while (jn <= (j + cookie.lg_sq))
			{
				if (tab[in][jn] != cookie.non_obstacle || tab[in][jn] == '\0')
				{
					cookie = ft_test2(cookie, i, j);
					return (cookie);
				}
				jn++;
			}
			in++;
		}
		cookie.lg_sq = cookie.lg_sq + 1;
	}
	return (cookie);
}
