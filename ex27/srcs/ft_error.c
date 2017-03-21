/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpatoux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 12:22:42 by rpatoux           #+#    #+#             */
/*   Updated: 2016/11/03 14:20:43 by rpatoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_error(int ac, char **av)
{
	int		i;
	char	buf[4096];
	int		fd;
	int		end;

	i = 0;
	buf[0] = 0;
	if (ac > 2)
		ft_putstr_error("Too many arguments.\n");
	else if (ac < 2)
		ft_putstr_error("File name missing.\n");
	else if ((fd = open(av[1], O_RDONLY)) == -1)
		ft_putstr_error("File error.\n");
	else
		end = read(fd, buf, 4095);
	if (buf[0] != '\0')
	{
		while (i != end)
			write(1, &buf[i++], 1);
	}
	buf[i] = 0;
}
