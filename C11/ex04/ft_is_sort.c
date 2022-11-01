/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:25:15 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/01 19:47:45 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef LEN
# define LEN 10
#endif

int	f_ishigher(int x, int y)
{
	return (x > y);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = -1;
	while (++i < length - 1)
	{
		if (tab[i] == tab[i + 1])
			return (0);
		if (!f(tab[i], tab[i + 1]))
			return (-1);
	}
	return (1);
}

int	main(void)
{
	int	*tab;
	int	i;
	int	s;
	int	c;

	tab = (int *)malloc(sizeof(int) * LEN);
	i = -1;
	c = 100;
	while (++i < LEN)
		tab[i] = c--;
	tab[3] = 98;
	i = -1;
	while (++i < LEN)
		printf(" %d |", tab[i]);
	printf("\n");
	s = ft_is_sort(tab, LEN, &f_ishigher);
	if (s == -1)
		printf("not sort as somewhere is lower than the next one\n");
	else if (!s)
		printf("not sort as somewhere is equalling\n");
	else
		printf("it is sorted!\n");
	free(tab);
	return (0);
}
