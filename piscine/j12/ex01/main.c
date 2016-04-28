/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlepeche <tlepeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/17 15:59:55 by tlepeche          #+#    #+#             */
/*   Updated: 2014/07/18 15:38:47 by tlepeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 4242

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	print(char **av, int ac, int i)
{
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar(' ');
		i++;
	}
}

int		main(int ac, char **av)
{
	int		i;
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (ac == 0)
		ft_putstr("File name missing.\n");
	else if (ac > 2)
		print(av, ac, 1);
	else
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			i = 1;
		while (i < ac)
			print(av, ac, 1);
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putstr(buf);
		return (0);
		if (close(fd) == -1)
			ft_putstr("close() error.\n");
	}
	return (0);
}
