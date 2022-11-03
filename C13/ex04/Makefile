NAME		=	main
SRC			=	main.c btree_create_node.c btree_apply_prefix.c utils.c btree_apply_infix.c \
				btree_apply_suffix.c btree_insert_data.c
OBJ			=	$(SRC:%.c=%.o)
H			=	-I.
CC			+=	-Wall -Wextra -Werror $(H)

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
