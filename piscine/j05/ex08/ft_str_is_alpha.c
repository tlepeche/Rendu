/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 12:45:39 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/10 13:22:34 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{
	int a;
	int	count;

	count = 0;
	a = 0;
	if (str[0] == '\0')
		return (1);
	while (str[a] != '\0')
	{
		if (str[a] < 65)
			count++;
		if ((str[a] >= 91) && (str[a] <= 96))
			count++;
		if (str[a] >= 123)
			count++;
		a++;
	}
	if (count == 0)
		return (1);
	else
		return (0);
}
