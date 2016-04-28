/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 19:53:24 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/10 00:25:20 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;
	int				result;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[j] != '\0' && i < n && j < n)
	{
		if (s1[i] != s2[j])
		{
			result = s1[i] - s2[j];
			return (result);
		}
		i++;
		j++;
	}
	return (0);
}
