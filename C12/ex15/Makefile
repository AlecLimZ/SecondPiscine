NAME		=	main
SRC			=	main.c ft_create_elem.c utils.c ft_list_clear.c ft_list_push_front.c \
				ft_list_size.c ft_list_last.c ft_list_push_back.c ft_list_push_strs.c \
				ft_list_at.c ft_list_reverse.c ft_list_foreach.c \
				ft_list_foreach_if.c utils2.c ft_list_find.c ft_list_remove_if.c \
				ft_list_merge.c ft_list_sort.c ft_list_reverse_fun.c
OBJ			=	$(SRC:%.c=%.o)
H			=	-I.
CC			+=	-Wall -Werror -Wextra $(H)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $^ -o $@ -fsanitize=address

noasan:		$(OBJ)
			$(CC) $^ -o $(NAME)

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
