/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:04:46 by rburger           #+#    #+#             */
/*   Updated: 2017/11/28 16:25:20 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include "../libft/libft.h"

typedef struct			s_input
{
	char				*str;
	struct s_input		*next;
}						t_input;

typedef struct			s_rooms
{
	char				*name;
	int					in_room;
	int					valid;
	char				*last;
	struct s_rooms		*next;
}						t_rooms;

typedef struct			s_links
{
	char				*link;
	char				**arr;
	struct s_links		*next;
}						t_links;

typedef struct			s_ants
{
	char				*name;
	char				*room;
	char				*last;
	struct s_ants		*next;
}						t_ants;

typedef struct			s_g
{
	t_input				*data;
	t_rooms				*rooms;
	t_links				*links;
	t_ants				*ants;
	char				*gnl;
	int					nr_ants;
	int					nr_rooms;
	int					nr_links;
	int					nr_start;
	int					nr_end;
	int					start_flag;
	int					end_flag;
	int					valid_link_start;
	int					valid_link_end;
	char				*start_room;
	char				*end_room;
}						t_g;

t_input					*insert_file(t_g *all);
void					print_name(char *name, char *room);
int						init_ints(t_g *all);
void					error();
void					check_errors(t_g *all);
void					check_errors1(t_g *all);
void					check_errors2(t_g *all);
t_ants					*save_ants(t_g *all);
void					fill_start_room(t_g *all);
char					**links(t_g *all, char *test);
char					*get_links(t_g *all, char *str);
t_ants					*allocate_rooms_ants(t_g *all);
void					path_to_end(t_g *g, t_ants *a, t_rooms *r, char **ar);
void					get_start_end(char *str, t_g *all);
int						check_for_end(t_g *all, char **arr);
void					find_path(t_g *all, t_rooms *r);
t_rooms					*move_from_to(t_g *g, t_rooms *r, char *frm, char *t);
int						ants_in_room(t_g *all, t_rooms *r, char *str);
int						is_room_valid(t_g *all, t_rooms *r, char *str);
void					traverse(t_g *all);
int						all_the_ifs(t_g *all, t_rooms *r, t_ants *a, char *str);
int						print_ants(t_g *all);
char					*save_room(char *str);
t_rooms					*add_room(char *str, t_rooms *node, t_g *all);
t_links					*add_link(char *str, t_links *node, t_g *all);
int						get_map(t_g *all);
int						print_arr(char **arr);
t_ants					*assign_rooms(t_g *all);
void					free_all(t_links *l, t_rooms *r, t_ants *a, t_input *i);
void					free_input(t_input *i);
void					free_ants(t_ants *a);
void					free_rooms(t_rooms *r);
void					free_links(t_links *l);
void					check_links(t_g *all);

#endif
