/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/18 11:04:14 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/18 11:30:58 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int lenght)
{
	int i;
	int pres;

	i = 0;
	pres = -214783647;
	while (i < lenght)
	{
		if (tab[i] > pres)
			pres = tab[i];
		i++;
	}
	return (pres);
}
