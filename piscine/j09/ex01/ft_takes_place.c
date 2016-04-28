/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/17 19:03:31 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/18 14:27:54 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char	*sentence;

	sentence = "THE FOLLOWING TAKES PLACE BETWEEN";
	if (hour > 0 && hour < 11)
		printf("%s %d A.M. AND %d A.M.\n", sentence, hour, hour + 1);
	else if (hour == 0)
		printf("%s %d A.M. AND %d A.M.\n", sentence, 12, 1);
	else if (hour >= 13 && hour < 23)
		printf("%s %d P.M. AND %d P.M.\n", sentence, hour - 12, hour - 11);
	else if (hour == 12)
		printf("%s %d P.M. AND %d P.M.\n", sentence, 12, 1);
	else if (hour == 11)
		printf("%s %d A.M. AND %d P.M.\n", sentence, 11, 12);
	else if (hour == 23)
		printf("%s %d P.M. AND %d A.M.\n", sentence, 11, 12);
}
