/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 13:10:19 by rburger           #+#    #+#             */
/*   Updated: 2017/06/19 17:33:48 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *newstr;

	newstr = (char *)malloc(size * sizeof(char) + 1);
	if (newstr == NULL)
		return (NULL);
	ft_memset(newstr, 0, size + 1);
	return (newstr);
}
