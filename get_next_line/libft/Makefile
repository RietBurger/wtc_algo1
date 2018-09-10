NAME		= libft.a

SRCS		= $(shell find . -name "*.c")

OBJS		= ft_strstr.o ft_strjoin.o ft_putstr.o ft_strcat.o ft_strclr.o \
			  ft_isdigit.o ft_toupper.o ft_strequ.o ft_memmove.o ft_itoa.o \
			  ft_memcmp.o ft_strlcat.o ft_putnbr.o ft_memchr.o ft_putchar.o \
			  ft_putchar_fd.o ft_striter.o ft_isalpha.o ft_memccpy.o \
			  ft_putnbr_fd.o ft_strcmp.o ft_strncpy.o ft_atoi.o ft_memalloc.o \
			  ft_strchr.o ft_strnstr.o ft_isprint.o ft_putendl.o ft_strncat.o \
			  ft_strrchr.o ft_isalnum.o ft_putstr_fd.o ft_isascii.o ft_strnequ.o \
			  ft_bzero.o ft_strtrim.o ft_iswhtspc.o ft_striteri.o ft_strmapi.o \
			  ft_strdel.o ft_strsub.o ft_strdup.o ft_strnew.o ft_memcpy.o ft_tolower.o \
			  ft_memdel.o ft_strncmp.o ft_strlen.o ft_strcpy.o ft_strmap.o \
			  ft_putendl_fd.o ft_memset.o ft_strsplit.o

CC			= gcc

CCFLAGS		= -Wall -Wextra -Werror -g -pedantic

HDDR		= -I includes/

.PHONY: clean fclean re run

all: $(NAME)

#%.o : %.c
#	@$(CC) $(CCFLAGS) -c $< -o $@
#	@echo "\033[01;35m$(NAME) -- \033[00;32m>>\033[0m $@"

$(NAME):
	@$(CC) $(CCFLAGS) -c $(SRCS) -I includes/
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
#	@mkdir -p objs/
#	@mv $(OBJS) objs/
	@echo "\033[01;35m$(NAME) -- \033[00;32m>>\033[0m $@"
	@echo "\033[01;35m$(NAME) -- \033[00;32mCOMPILED\033[0m"
clean:
	@rm -rf $(OBJS)
	@echo "\033[01;35m$(NAME) -- \033[00;32mREMOVED OBJECT FILES\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[01;35m$(NAME) -- \033[00;32mREMOVED EXECUTABLE\033[0m"

re: fclean all

#run:
#	@rm -f $(NAME)
#	@echo "\033[01;35m$(NAME) -- \033[00;32mREMOVED EXECUTABLE\033[0m"
#	@$(MAKE) -s all
