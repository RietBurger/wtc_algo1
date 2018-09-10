/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 18:27:51 by rburger           #+#    #+#             */
/*   Updated: 2017/06/19 17:16:46 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *ptr;
	unsigned char ch;

	ptr = (unsigned char *)str;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*ptr == ch)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
