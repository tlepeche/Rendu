/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/18 00:36:00 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/18 14:40:56 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_bouton(int i, int j, int k)
{
	if (i == 3 || i == 4)
		return (i);
	if (j == 3 || j == 4)
		return (j);
	if (k == 3 || k == 4)
		return (k);
	return (0);
}
