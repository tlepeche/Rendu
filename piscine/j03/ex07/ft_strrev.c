/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 17:15:38 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/25 22:43:38 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strrev(char *str)
{
	int a;
	char tmp;
	int i;

	a = 0;
	while (str[a] != '\0')
		a++;
	a--;
	i = 0;
	while (i < a)
	{
		tmp = str[a];
		str[a] = str[i];
		str[i] = tmp;
		i++;
		a--;
	}

	return (str);
}


int main(/*int ac, char **av*/)
{
//	(void)ac;
	char str[365]= "Hello";
//	str = av[1];
	printf("%s\n", ft_strrev(str));
	return (0);
}
