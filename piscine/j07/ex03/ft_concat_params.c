/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/13 21:51:25 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/14 22:49:12 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_unichain(char *src, char *dest)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i + 1] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		finalen;
	int		i;

	i = 1;
	finalen = 0;
	while (i != argc + 1)
	{
		finalen = finalen + ft_strlen(argv[i]);
		i++;
	}
	str = (char*)malloc(sizeof(str) * (finalen) + (i));
	i = 1;
	while (i < argc)
	{
		if (i != 1)
			str = ft_unichain("\n", str);
		str = ft_unichain(argv[i], str);
		i++;
	}
	return (str);
}
