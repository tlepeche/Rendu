# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bomber.sh                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/07/17 22:34:29 by tlepeche          #+#    #+#              #
#    Updated: 2014/07/18 14:33:54 by tlepeche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat $1 |grep bomber@42staff  | tr "\t" "/" | cut -d / -f3
cat $1 | grep 583-682932-1  | tr "\t" "/" | cut -d / -f3
cat $1 | grep admin@cto  | tr "\t" "/" | cut -d / -f4