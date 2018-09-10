/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:26:17 by rburger           #+#    #+#             */
/*   Updated: 2017/11/28 16:23:46 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"
#include <stdio.h>

t_input			*insert_file(t_g *all)
{
	t_input		*head;
	t_input		*node;

	head = NULL;
	while (get_next_line(0, &all->gnl))
	{
		if (head == NULL)
		{
			head = (t_input *)ft_memalloc(sizeof(t_input));
			node = head;
		}
		node->str = all->gnl;
		node->next = (t_input *)ft_memalloc(sizeof(t_input));
		if (node->str == NULL || (ft_strcmp(node->str, "\0") == 0))
			error();
		node = node->next;
	}
	node->next = NULL;
	return (head);
}
