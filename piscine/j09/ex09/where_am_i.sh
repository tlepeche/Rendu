# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/07/18 03:20:18 by tlepeche          #+#    #+#              #
#    Updated: 2014/07/18 03:20:21 by tlepeche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifconfig | grep inet | tail -n 1 | tr " " "/" | cut -d / -f2
