/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 10:36:21 by rburger           #+#    #+#             */
/*   Updated: 2017/06/11 12:13:30 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;

	str = NULL;
	len = 0;
	str = (char *)malloc(sizeof(str) * (len + 1));
	i = 0;
	if (n < 0)
	{
		len = '0' - n;
		str[i] = len;
		i++;
	}
	str[i] = '\0';
	return (str);
	if (n > 9)
	{
		len = (n / 10);
		len = (n % 10);
		str[i] = len;
		i++;
	}
	str[i] = '\0';
	return (str);
}
