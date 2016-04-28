/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/12 19:14:01 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/14 21:50:34 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *str;
	int i;
	int rangelen;

	if (max <= min)
		return (0);
	i = min;
	str = (int *)malloc(sizeof(*str) * (max - min - 1));
	while (i < max)
	{
		str[i] = i;
		i++;
	}
	return (str);
}
