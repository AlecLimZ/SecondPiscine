NAME		=	main
SRC			=	ex00/ft_strcpy.c main.c ex01/ft_strncpy.c ex02/ft_str_is_alpha.c ex03/ft_str_is_numeric.c ex04/ft_str_is_lowercase.c ex05/ft_str_is_uppercase.c ex06/ft_str_is_printable.c ex07/ft_strupcase.c ex08/ft_strlowcase.c ex09/ft_strcapitalize.c ex10/ft_strlcpy.c ex11/ft_putstr_non_printable.c ex12/ft_print_memory.c helper/ft_strlen.c
OBJ			=	$(SRC:%.c=%.o)
HEADER		=	-I.
CC			+=	-Wall -Wextra -Werror -pedantic $(HEADER)

test:		all
			./$(NAME)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $^ -o $@

try:		$(OBJ)
			$(CC) $^ -fsanitize=address -o $(NAME)

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:	test all clean fclean re
