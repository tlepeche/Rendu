/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 14:57:52 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/24 14:23:15 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int a;
	int count;

	count = 0;
	a = 0;
	if (str[0] == '\0')
		return (1);
	while (str[a] != '\0')
	{
		if (str[a] <= 96)
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


int main()
{
	printf("%d", ft_str_is_lowercase("SALUT"));
	return (0);
}
