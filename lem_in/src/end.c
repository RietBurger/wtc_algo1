/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 08:48:17 by rburger           #+#    #+#             */
/*   Updated: 2017/11/27 16:51:38 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int			check_for_end(t_g *all, char **arr)
{
	while (*arr)
	{
		if (ft_strcmp(*arr, all->end_room) == 0)
			return (1);
		arr++;
	}
	return (0);
}
