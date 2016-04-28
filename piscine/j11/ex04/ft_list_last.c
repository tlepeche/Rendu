/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 22:03:54 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/16 22:14:14 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
