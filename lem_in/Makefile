# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rburger <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/20 11:59:41 by rburger           #+#    #+#              #
#    Updated: 2017/11/28 16:47:11 by rburger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lem-in

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC_DIR = ./src/

INC_DIR = -I inc/

SRCS =	main.c \
	  	insert_file.c \
		print.c \
 		errors.c \
		save_ants.c \
		links.c \
		find_path.c \
		traverse.c \
		is_room_valid.c \
		path_to_end.c \
		fill_start.c \
		move_from_to.c \
		which_ant_in_room.c \
		end.c \
		save_room.c \
		add_link.c \
		add_room.c \
		get_start_end.c \
		print_arr.c \
		get_map.c \
		assign_rooms.c \
		free.c

SRC = $(addprefix $(SRC_DIR), $(SRCS))

OBJ = $(SRCS:.c=.o)

$(NAME):
	make re -C libft/
	$(CC) $(INC_DIR) -c $(SRC)
	$(CC) -o $(NAME) $(OBJ) -L libft/ -lft

all : $(NAME)

.PHONY: clean fclean re

clean:
	rm -f $(OBJ)
	make -C libft/ clean

fclean:
	rm -f $(OBJ)
	rm -f $(NAME)
	make -C libft/ fclean

re: fclean all
