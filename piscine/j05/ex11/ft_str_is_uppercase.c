/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 15:09:55 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/24 14:25:55 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_str_is_uppercase(char *str)
{
	int a;
	int count;

	count = 0;
	a = 0;
	if (str[a] == '\0')
		return (1);
	while (str[a] != '\0')
	{
		if (str[a] < 65)
			count++;
		if (str[a] > 90)
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
	printf("%d", ft_str_is_uppercase("SAL UT"));
	return (0);
}
