NAME		=	main
SRC			=	ex00/ft_strcmp.c main.c ex01/ft_strncmp.c ex02/ft_strcat.c \
				ex03/ft_strncat.c ex04/ft_strstr.c ex05/ft_strlcat.c
OBJ			=	$(SRC:%.c=%.o)
HEAD		=	-I.
CC			+=	$(HEAD) -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $^ -o $@ -fsanitize=address -lbsd
			#$(CC) $^ -o $@

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
