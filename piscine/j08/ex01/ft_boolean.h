/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/14 12:29:20 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/15 17:36:33 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

# define EVEN_MSG "I have a pair number of arguments.\n"
# define EVEN(nbr) (nbr % 2 == 0)

# define ODD_MSG "I have an impair number of arguments.\n"
# define SUCCESS 0
# define TRUE 1
# define FALSE 0
typedef int	t_bool;

#endif
