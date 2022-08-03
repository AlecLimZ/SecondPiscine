NAME		=	main
SRC			=	ex00/ft_strcpy.c main.c
OBJ			=	$(SRC:%.c=%.o)
HEADER		=	-I.
CC			+=	-Wall -Wextra -Werror -fsanitize=address -pedantic $(HEADER)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $^ -o $@

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all
