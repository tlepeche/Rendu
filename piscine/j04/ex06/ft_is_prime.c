/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 21:01:07 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/09 21:39:46 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int div;
	int add;

	add = 0;
	div = nb;
	if (nb == 0 || nb == 1)
		return (0);
	while (div > 0)
	{
		if (nb % div == 0)
			add++;
		div--;
	}
	if (add == 2)
		return (1);
	return (0);
}
