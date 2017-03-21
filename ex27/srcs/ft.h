/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpatoux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 12:23:27 by rpatoux           #+#    #+#             */
/*   Updated: 2016/11/03 14:16:15 by rpatoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define BUF 4096

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void	ft_error(int ac, char **av);
void	ft_putchar(char c);
void	ft_putchar_error(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_putstr_error(char *str);
int		ft_strcmp(char *s1, char *s2);

#endif
