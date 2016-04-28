/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 16:49:44 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/09 23:23:20 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int r1;
	int r2;
	int count;
	int exit;

	exit = 0;
	if (nb == 1)
		return (1);
	if (nb == 0)
		return (0);
	count = 0;
	r1 = nb;
	r2 = 0;
	while (r1 != r2 && exit == 0)
	{
		r2 = r1;
		r1 = (r1 + (nb / r1)) / 2;
		count++;
		if (count > 300)
			exit = 1;
	}
	if (count > 300)
		return (0);
	else
		return (r1);
}
