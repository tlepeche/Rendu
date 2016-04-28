/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/24 11:09:14 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/24 18:27:25 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**print_square(char **tab, t_data cookie)
{
	int xn;
	int yn;
	int lenght;

	xn = cookie.x;
	yn = cookie.y;
	lenght = cookie.lg_sq;
	while (xn < (cookie.x + lenght))
	{
		yn = cookie.y;
		while (yn < (cookie.y + lenght))
		{
			tab[xn][yn] = cookie.plein;
			yn++;
		}
		xn++;
	}
	return (tab);
}
