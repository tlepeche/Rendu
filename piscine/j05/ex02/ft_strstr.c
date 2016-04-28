/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 22:51:30 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/10 22:51:34 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int a;
	int b;

	a = 0;
	b = 0;
	if (to_find == NULL)
		return (NULL);
	while (str[a] != '\0')
	{
		b = 0;
		if (str[a] == to_find[b])
		{
			while (str[a] == to_find[b])
			{
				a++;
				b++;
				if (to_find[b] == '\0')
					return (&str[a - b]);
			}
		}
		a++;
	}
	return (NULL);
}
