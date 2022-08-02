NAME		=	main
SRC			=	main.c ex00ft_ft/ft_ft.c ex01ft_ultimate/ft_ultimate_ft.c \
				ex02swap/ft_swap.c ex03div_mod/ft_div_mod.c \
			  	ex04ultimate_div/ft_ultimate_div_mod.c ex05putsr/ft_putstr.c\
			   	ex06strlen/ft_strlen.c	ex07rev_int_tab/ft_rev_int_tab.c \
				ex08sort_int_tab/ft_sort_int_tab.c
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
