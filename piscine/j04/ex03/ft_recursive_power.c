/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 12:49:52 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/09 18:07:53 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	int r;

	r = 0;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
	{
		r = nb * ft_recursive_power(nb, power - 1);
		return (r);
	}
}
