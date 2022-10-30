NAME		=	ft_display_file
SRC			=	ft_display_file.c utils.c
OBJ			=	$(SRC:%.c=%.o)
H			=	-I.
CC			+=	-Wall -Wextra -Werror $(H)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $^ -o $@

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
