/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/03 22:06:50 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/04 23:23:48 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c)

void	ft_print_reverse_alphabet(void)
{
	int i;

	i = 123;
	while (i > 97)
	{
		ft_putchar(i);
		i--;
	}
}
