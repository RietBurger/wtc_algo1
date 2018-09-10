/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 17:15:53 by rburger           #+#    #+#             */
/*   Updated: 2017/07/24 09:48:58 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len1;
	int		len2;

	if (s1 != NULL && s2 != NULL)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		str = (char *)ft_memalloc(sizeof(char) * (len1 + len2 + 1));
		if (!str)
			return (NULL);
		str = ft_strcpy(str, s1);
		str = ft_strcat(str, s2);
		str[ft_strlen(str)] = '\0';
		return (str);
	}
	return (NULL);
}
