/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 11:09:50 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/09 18:06:29 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	int r;

	r = 0;
	if (nb == 1)
		return (1);
	if (nb == 0)
		return (0);
	else
	{
		r = nb * ft_recursive_factorial(nb - 1);
		return (r);
	}
}
