/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/21 18:31:14 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/24 22:39:45 by abalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# define BUF_SIZE 3000000
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct	s_data
{
	int			x;
	int			y;
	int			lg_sq_prec;
	int			lg_sq;
	int			arret;
	int			check;
	char		obstacle;
	char		non_obstacle;
	char		plein;
	int			position;
}				t_data;

int				ft_check_char(char **tab, int x, t_data cookie);
int				ft_check_map(char **tab, int x);
t_data			ft_determine_obs(t_data cookie, char *str);
void			ft_putnbr(int nb);
int				ft_size_x(char *str);
int				ft_size_y(char *str);
char			**print_square(char **tab, t_data cookie);
int				ft_solver(char **tab, int x, int y, char *buf);
t_data			ft_test(char **tab, int i, int j, t_data cookie);
void			ft_putstr(char *str);
void			ft_putchar(char c);
void			ft_printtab(char **str, int x);
void			ft_putnbr(int nb);
char			**ft_construct_tab(char *str, int x, char **tabl);

#endif
