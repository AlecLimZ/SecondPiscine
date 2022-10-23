NAME		=	main
SRC			=	ex00/ft_strlen.c main.c ex01/ft_putstr.c ex02/ft_putnbr.c \
				ex03/ft_atoi.c ex04/ft_putnbr_base.c ex05/ft_atoi_base.c
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
