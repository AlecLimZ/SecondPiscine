NAME		=	main
SRC			=	main.c ft_create_elem.c utils.c free.c ft_list_push_front.c \
				ft_list_size.c ft_list_last.c
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
