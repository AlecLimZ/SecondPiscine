/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:54:09 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/01 21:20:20 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do.h"

typedef int	(*t_fop[5])(int, int);

void	ft_putstr_fd(int fd, char *s)
{
	write(fd, s, ft_strlen(s));
}

void	ft_do(int *x, int *y, t_fop const ptr, char op)
{
	int	nbr;

	if (op == '+')
		nbr = ptr[0](*x, *y);
	else if (op == '-')
		nbr = ptr[1](*x, *y);
	else if (op == '/')
		nbr = ptr[2](*x, *y);
	else if (op == '*')
		nbr = ptr[3](*x, *y);
	else
		nbr = ptr[4](*x, *y);
	ft_putnbr(nbr);
}

int	ft_check(int *x, int *y, char **av)
{
	char	c;

	c = av[2][0];
	*x = ft_atoi(av[1]);
	*y = ft_atoi(av[3]);
	if (*y == 0 && (c == '/' || c == '%'))
		return (0);
	return (1);
}

int	ft_stop(char *op)
{
	if (op[0] == '/')
		ft_putstr_fd(2, "Stop : division by zero\n");
	else if (op[0] == '%')
		ft_putstr_fd(2, "Stop : modulo by zero\n");
	return (1);
}

int	main(int ac, char **av)
{
	int			x;
	int			y;
	t_fop const	fop = {ft_plus, ft_minus, ft_division
						, ft_mutli, ft_modulo};

	if (ac != 4)
		return (1);
	if (!ft_isop(av[2]))
		return (1);
	if (!ft_check(&x, &y, av))
		return (ft_stop(av[2]));
	ft_do(&x, &y, fop, av[2][0]);
	return (0);
}
