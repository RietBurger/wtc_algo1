/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 17:37:05 by rburger           #+#    #+#             */
/*   Updated: 2017/06/25 15:20:45 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcspn(char *str, char *chars)
{
	char	c;
	char	*p;
	char	*s;

	s = str;
	c = *s;
	p = chars;
	while (c != '\0')
	{
		s++;
		c = *s;
		if (*p != '\0')
			p++;
		if (c == *p)
			return (s - str);
	}
	return (s - str);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**out;
	int		wp;
	size_t	len;

	len = 0;
	wp = 0;
	i = 0;
	out = (char **)malloc(sizeof(char *) * (ft_strcspn((char *)s, &c) + 1));
	if (!s || !out)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		len = i;
		while (s[i] == c && s[i])
			i++;
		if ((out[wp] = ft_strsub(s, len, i - len)))
			wp++;
	}
	out[wp] = NULL;
	return (out);
}
