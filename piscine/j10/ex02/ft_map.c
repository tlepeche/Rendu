/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/15 18:54:17 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/15 20:14:35 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int			i;
	int			*tab2;

	tab2 = (int*)malloc(sizeof(int) * lenght);
	i = 0;
	while (i < lenght)
	{
		tab2[i] = (*f)(tab[i]);
		i++;
	}
	return (tab2);
}
