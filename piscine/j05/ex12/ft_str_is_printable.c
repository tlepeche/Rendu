/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 15:15:58 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/10 15:20:52 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int fr_str_is_printable(char *str)
{
	int a;
	int count;

	count = 0;
	a = 0;
	if (str[a] == '\0')
		return (1);
	while (str[a] != '\0')
	{
		if (str[a] <= 31 || str[a] == 127)
			count++;
		a++;
	}
	if (count == 0)
		return (1);
	else
		return (0);
}
