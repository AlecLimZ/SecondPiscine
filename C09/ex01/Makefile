NAME		=	libft.a
SRC			=	ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
HP			=	-Iincludes
OBJ			=	$(SRC:%.c=%.o)
CC			+=	-Wall -Werror -Wextra $(HP)

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rc $@ $^
			ranlib $@

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		clean fclean re
