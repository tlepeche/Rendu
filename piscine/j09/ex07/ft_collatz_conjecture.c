/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/18 02:25:52 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/18 02:30:50 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_collatz_conjecture(unsigned int base)
{
	int i;

	i = 0;
	while (base > 1)
	{
		i++;
		if (base % 2 == 0)
			return (i += base = ft_collatz_conjecture(base / 2));
		if (base % 2 == 1)
			return (i += base = ft_collatz_conjecture(base * 3 + 1));
	}
	return (i);
}
