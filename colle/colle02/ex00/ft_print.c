/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgaunt <edgaunt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/20 23:28:04 by edgaunt           #+#    #+#             */
/*   Updated: 2014/07/20 23:29:30 by edgaunt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "f_list.h"

void		ft_print0(int i, int j)
{
	ft_putstr("[colle-00] [");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(j);
	ft_putstr("] || [colle-01] [");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(j);
	ft_putstr("] || [colle-02] [");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(j);
	ft_putstr("] || [colle-03] [");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(j);
	ft_putstr("] || [colle-04] [");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(j);
	ft_putstr("]");
}

void		ft_print1(int i, int j)
{
	ft_putstr("[colle-02] [");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(j);
	ft_putstr("] || [colle-03] [");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(j);
	ft_putstr("] || [colle-04] [");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(j);
	ft_putstr("]");
}

void		ft_print2(int i, int j)
{
	ft_putstr("[colle-02] [");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(j);
	ft_putstr("] || [colle-04] [");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(j);
	ft_putstr("]");
}

void		ft_print3(int i, int j)
{
	ft_putstr("[colle-03] [");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(j);
	ft_putstr("] || [colle-04] [");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(j);
	ft_putstr("]");
}

int			ft_size_i(char *buf)
{
	int		i;

	i = 0;
	while (buf[i] != '\n')
		i++;
	return (i);
}
