/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/12 18:40:21 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/14 21:50:22 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		ft_len_compare(char *src, char *str)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	while (str[b] != '\0')
	{
		b++;
	}
	if (a != b)
		return (0);
	return (1);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	str = (char *)malloc(sizeof(*str) * (j + 1));
	while (i < j)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	if (ft_len_compare(src, str) == 0)
		return (0);
	printf("%s", str);
	return (0);
}
