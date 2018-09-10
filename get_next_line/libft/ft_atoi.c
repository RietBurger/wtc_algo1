/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 19:04:41 by rburger           #+#    #+#             */
/*   Updated: 2017/06/11 10:24:59 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned int i;
	unsigned int sign;
	unsigned int len;

	len = 0;
	i = 0;
	sign = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			return (0);
		while (ft_iswhtspc(str[i]))
			i++;
		if (str[0] == '-')
			sign = '-';
		if (str[i] >= '0' && str[i] <= '9')
		{
			len = (len * 10);
			len = len + str[i] - '0';
		}
		i++;
	}
	return (len * sign);
}
