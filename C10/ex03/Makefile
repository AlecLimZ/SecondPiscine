NAME		=	ft_hexdump
SRC			=	ft_hexdump.c utils.c error.c function.c
OBJ			=	$(SRC:%.c=%.o)
H			=	-I.
CC			+=	-Wall -Wextra -Werror $(H) -fsanitize=address

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $^ -o $@

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
