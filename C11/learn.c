/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   learn.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:28:43 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/01 16:05:23 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#define ADD 0
#define SUB	1
#define MUL	2
#define DIV	3

typedef int	(*t_fptr[])(int, int);

int	add(int a, int b)
{
	return (a + b);
}

int	sub(int a, int b)
{
	return (a - b);
}

int	mul(int a, int b)
{
	return (a * b);
}

int	divide(int a, int b)
{
	return (a / b);
}

int	main(void)
{
	int		op1;
	int		op2;
	int		result;
	char	operator;
	t_fptr	f;

	f = {add, sub, mul, divide};
	puts("**Calculator Application**\n");
	result = fptr[ADD](50, 20);
	printf("add: %d\n", result);
	return (0);
}
