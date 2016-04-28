/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 14:48:37 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/10 14:56:01 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
	int a;
	int count;

	count = 0;
	a = 0;
	if (str[0] == '\0')
		return (1);
	while (str[a] != '\0')
	{
		if (str[a] < 48)
			count++;
		if (str[a] >= 58)
			count++;
		a++;
	}
	if (count == 0)
		return (1);
	else
		return (0);
}
