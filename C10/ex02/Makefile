NAME		=	ft_tail
SRC			=	ft_tail.c utils.c ft_parser.c ft_error.c misc.c
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
