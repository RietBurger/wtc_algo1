/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:23:18 by rburger           #+#    #+#             */
/*   Updated: 2017/11/28 16:39:24 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		init_ints(t_g *all)
{
	all->nr_ants = 0;
	all->nr_rooms = 0;
	all->nr_links = 0;
	all->nr_end = 0;
	all->start_flag = 0;
	all->end_flag = 0;
	all->valid_link_start = 0;
	all->valid_link_end = 0;
	return (0);
}

int		main(void)
{
	t_g all;

	all.data = NULL;
	all.data = insert_file(&all);
	init_ints(&all);
	if (!(ft_isdigit(all.data->str[0])))
		error();
	get_map(&all);
	check_errors1(&all);
	check_errors2(&all);
	ft_putchar('\n');
	traverse(&all);
	free_all(all.links, all.rooms, all.ants, all.data);
	free(all.end_room);
	free(all.start_room);
	return (0);
}
