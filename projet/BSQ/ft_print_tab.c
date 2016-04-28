/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/24 11:09:27 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/24 12:51:03 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_printtab(char **str, int x)
{
	int		i;

	i = 0;
	while (i < x)
	{
		ft_putstr(str[i]);
		if (i != (x - 1))
			ft_putchar('\n');
		i++;
	}
}