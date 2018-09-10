/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 17:11:00 by rburger           #+#    #+#             */
/*   Updated: 2017/06/07 15:44:02 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	st;
	size_t	end;
	char	*str;

	i = -1;
	st = 0;
	if (!s)
		return (NULL);
	end = ft_strlen((char *)s) - 1;
	while (s[st] != '\0' && ft_iswhtspc(s[st]))
		st++;
	while (end > st && s[end] != '\0' && ft_iswhtspc(s[st]))
		end--;
	if (st > end)
		return (NULL);
	if ((str = (char *)malloc(sizeof(char) * (end - st + 2))) == NULL)
		return (NULL);
	while (++i <= (end - st))
		str[i] = s[st + i];
	str[i] = '\0';
	return (str);
}
