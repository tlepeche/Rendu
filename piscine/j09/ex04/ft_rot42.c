/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/17 22:23:36 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/17 23:52:12 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char min(char c, int j)
{
	while (j < 16)
	{
		c = c + 1;
		if (c == 91)
			c = 65;
		j++;
	}
	return (c);
}

char max(char c, int j)
{
	while (j < 16)
	{
		c = c + 1;
		if (c == 123)
			c = 97;
		j++;
	}
	return (c);
}

char *ft_rot42(char *str)
{
	int i;

	i = 0;
	if (65 <= str[i] && str[i] <= 90)
	{
		while (str[i] != '\0')
		{
			str[i] = min(str[i], 0);
			i++;
		}
	}
	i = 0;
	if (97 <= str[i] && str[i] <= 122)
	{
		while (str[i] != '\0')
		{
			str[i] = max(str[i], 0);
			i++;
		}
	}
	return (str);
}
