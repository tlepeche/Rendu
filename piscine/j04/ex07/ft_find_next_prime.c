/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 21:42:49 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/09 21:56:59 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_find_next_prime(int nb)
{
	int div;
	int add;
	int prime;

	prime = 0;
	add = 0;
	div = 0;
	if (nb == 0 || nb == 1)
		return (0);
	while (prime == 0)
	{
		add = 0;
		div = nb;
		while (div > 0)
		{
			if (nb % div == 0)
				add++;
			div--;
		}
		if (add == 2)
			prime = 1;
		else
			nb++;
	}
	return (nb);
}
