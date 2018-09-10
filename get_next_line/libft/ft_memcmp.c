/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 18:44:32 by rburger           #+#    #+#             */
/*   Updated: 2017/06/10 14:51:36 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			st1;
	size_t			st2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		st1 = st1 + s1[i];
		st2 = st2 + s2[i];
		i++;
	}
	if (st1 > st2)
		return (1);
	else if (st1 < st2)
		return (0);
	return (0);
}
