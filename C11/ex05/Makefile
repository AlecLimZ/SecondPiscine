NAME		=	do-op
SRC			=	main.c op.c ft_atoi.c ft_putnbr.c
OBJ			=	$(SRC:%.c=%.o)
H			=	-I.
CC			+=	-Wall -Wextra -Werror $(H)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $^ -o $@ -fsanitize=address

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
