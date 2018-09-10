/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 11:23:48 by rburger           #+#    #+#             */
/*   Updated: 2017/06/10 16:19:11 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s1, int c)
{
	int len;

	len = 0;
	while (s1[len])
		len++;
	if ((c > 255) || (c < 0))
		return (0);
	while (s1[len] != (char)c)
		len--;
	if ((char)c == s1[len])
		return (char*)&s1[len];
	if (s1[len] == '\0')
		return (0);
	if (s1 == NULL)
		return (NULL);
	return (0);
}
