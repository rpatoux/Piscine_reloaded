/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpatoux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 21:35:08 by rpatoux           #+#    #+#             */
/*   Updated: 2016/11/03 09:23:16 by rpatoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*str;

	i = 0;
	if (min >= max)
		return (NULL);
	str = (int *)malloc(sizeof(int) * (max - min));
	if (!str)
		return (NULL);
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	str[i] = 'NULL';
	return (str);
}
