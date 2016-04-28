/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 21:55:55 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/16 22:01:36 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ftlib.h>
#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	t_list	tmp;
	int		count;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
