/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/15 20:28:21 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/16 21:12:29 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int(*f)(char*))
{
	int a;

	a = 0;
	while (tab[a] != '\0')
	{
		if ((*f)(tab[a][b]) == 1)
			return (1);
		a++;
	}
	return (0);
}