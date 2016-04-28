/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_list.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgaunt <edgaunt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/19 13:42:43 by edgaunt           #+#    #+#             */
/*   Updated: 2014/07/20 23:37:33 by edgaunt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef F_LIST_H
# define F_LIST_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <sys/uio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void		ft_compare(char *buf, int i, int j);
void		ft_print0(int i, int j);
void		ft_print1(int i, int j);
void		ft_print2(int i, int j);
void		ft_print3(int i, int j);
void		ft_putchar(char c);
void		ft_putnbr(int nb);
void		ft_putstr(char *str);
int			ft_error(void);
int			ft_mult_putstr(int i, int j, int nub);
int			ft_size_j(char *buf);
int			ft_size_i(char *buf);
void		ft_compare(char *buf, int i, int j);
int			ft_zero(char *buf, int x, int y, int i);
int			ft_one(char *buf, int x, int y, int i);
int			ft_two(char *buf, int x, int y, int i);
int			ft_three(char *buf, int x, int y, int i);
int			ft_four(char *buf, int x, int y, int i);

#endif
