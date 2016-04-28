/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 11:13:28 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/09 18:04:53 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int resultat;

	if (nb == 1)
		return (1);
	else
		return (0);
	resultat = 1;
	if (nb > 1)
	{
		while (nb > 1)
		{
			resultat = resultat * nb;
			nb--;
		}
		return (0);
	}
}
