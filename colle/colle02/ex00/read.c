/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testread.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgaunt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/19 23:52:13 by edgaunt           #+#    #+#             */
/*   Updated: 2014/07/20 23:31:13 by edgaunt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUF_SIZE 100000

#include "f_list.h"

void		ft_compare(char *buf, int i, int j)
{
	if (i == 0 || j == 0)
		ft_print0(0, j);
	else if (i == 1 && j == 1 && buf[0] == 65)
		ft_print1(i, j);
	else if (i == 1 && j > 1 && buf[0] == 65 && buf[(j * 2) - 2] == 67)
		ft_print2(i, j);
	else if (j == 1 && i > 1 && buf[0] == 65 && buf[i - 1] == 67)
		ft_print3(i, j);
	else if (buf[0] == 'o')
		ft_mult_putstr(i, j, 0);
	else if (buf[0] == '/')
		ft_mult_putstr(i, j, 1);
	else if (buf[0] == 65 && buf[i] == 65)
		ft_mult_putstr(i, j, 2);
	else if (buf[0] == 65 && buf[i] != 65)
	{
		if (buf[(i + 1) * j - 2] == 65)
			ft_mult_putstr(i, j, 4);
		else
			ft_mult_putstr(i, j, 3);
	}
}

int			ft_size_j(char *buf)
{
	int		j;
	int		count;

	count = 0;
	j = 0;
	while (buf[j] != '\0')
	{
		if (buf[j] == '\n')
		{
			count++;
		}
		j++;
	}
	return (count);
}

int			ft_mult_putstr(int i, int j, int nub)
{
	ft_putstr("[colle-0");
	ft_putnbr(nub);
	ft_putstr("] [");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(j);
	ft_putstr("]");
	return (1);
}

int			ft_error(void)
{
	ft_putstr("aucune\n");
	return (0);
}

int			main(void)
{
	int		i;
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		j;

	ret = read(0, &buf, BUF_SIZE);
	buf[ret] = '\0';
	i = ft_size_i(buf);
	j = ft_size_j(buf);
	ft_compare(buf, i, j);
	return (0);
}
