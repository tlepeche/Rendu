/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 18:15:19 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/08 23:40:16 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
	int a;
	int r;
	int neg;

	a = 0;
	r = 0;
	neg = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 65 && str[a] <= 90) || (str[a] <= 122 && str[a] >= 97))
			return (0);
		if (str[a] == '+')
		{
			if (str[a + 1] == ' ' || str[a + 1] == '	')
				return (0);
			if (str[a + 1] == '-')
				return (0);
			a++;
		}
		if (str[a] == '-')
		{
			if (str[a + 1] == ' ' || str[a + 1] == '	')
				return (0);
			else
				neg = 1;
			a++;
		}
		else
		{
			if (str[a] == ' ' || str[a] == '	')
				a++;
			else
			{
				r = r + (str[a] - 48);
				if (str[a + 1] != '\0' && str[a + 1] != ' ')
					if (str[a + 1] != '	')
						r = r * 10;
				a++;
			}
		}
	}
	if (neg == 1)
		r = r * -1;
	return (r);
}
