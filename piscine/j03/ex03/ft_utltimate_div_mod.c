/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utltimate_div_mod.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/06 12:16:03 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/06 18:43:45 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;
	int c;
	int d;

	c = *a;
	d = *b;
	div = c / d;
	mod = c % d;
	a = &div;
	b = &mod;
}
