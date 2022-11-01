/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:51:30 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/01 17:14:28 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

#define LEN	1337

void	ft_putnbr(int n)
{
	char	c[11];
	int		sign;
	int		i;
	long	ln;

	sign = 1;
	ln = n;
	if (ln < 0)
	{
		sign = -1;
		ln *= -1;
	}
	i = 0;
	while (ln > 0)
	{
		c[i++] = '0' + ln % 10;
		ln /= 10;
	}
	c[i] = '\0';
	if (sign == -1)
		write(1, "-", 1);
	while (--i >= 0)
		write(1, &c[i], 1);
	write(1, "\n", 1);
}

void	ft_foreach(int *tab, int length, void (*f)(int a))
{
	int	i;

	i = -1;
	while (++i < length)
		f(tab[i]);
}

int	main(void)
{
	int	*tab;
	int	i;

	srand(time(NULL));
	tab = (int *)malloc(sizeof(int) * LEN);
	i = -1;
	while (++i < LEN)
		tab[i] = rand() % 2000;
	ft_foreach(tab, LEN, &ft_putnbr);
	free(tab);
	return (0);
}
