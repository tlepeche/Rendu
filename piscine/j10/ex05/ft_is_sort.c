/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/15 21:04:49 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/16 10:07:41 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int countup;
	int countdown;

	i = 1;
	countup = 0;
	countdown = 0;
	while (i < length)
	{
		if ((*f)(tab[i - 1], tab[i]) >= 0)
			countup++;
		if ((*f)(tab[i - 1], tab[i]) <= 0)
			countdown++;
		i++;
	}
	if (countup == (i - 1) || countdown == (i - 1))
		return (1);
	return (0);
}
