/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/14 18:47:35 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/14 21:50:07 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int rangelen;
	int i;
	int j;

	rangelen = max - min;
	if (rangelen <= 0)
	{
		range = NULL;
		return (0);
	}
	j = 0;
	i = min;
	*range = (int *)malloc(sizeof(int) * (max - min - 1));
	while (i < max)
	{
		(*range)[j] = i;
		i++;
		j++;
	}
	return (rangelen);
}
