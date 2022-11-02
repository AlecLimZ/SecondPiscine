NAME		=	main
SRC			=	main.c
OBJ			=	$(SRC:%.c=%.o)
H			=	-I.
CC			+=	-Wall -Werror -Wextra $(H)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $^ -o $@

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
