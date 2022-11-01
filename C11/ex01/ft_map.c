/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:14:48 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/01 17:21:52 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

#define LEN 10

int	plusplus(int x)
{
	return (x + 1);
}

int	selfmult(int x)
{
	return (x * x);
}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*map;
	int	i;

	map = (int *)malloc(sizeof(int) * length);
	i = -1;
	while (++i < length)
		map[i] = f(tab[i]);
	return (map);
}

int	main(void)
{
	int	*tab;
	int	*tab2;
	int	i;

	srand(time(NULL));
	tab = (int *)malloc(sizeof(int) * LEN);
	i = -1;
	while (++i < LEN)
		tab[i] = rand() % 10;
	tab2 = ft_map(tab, LEN, &selfmult);
	i = -1;
	while (++i < LEN)
		printf("tab: %d\ttab2: %d\n", tab[i], tab2[i]);
	free(tab);
	free(tab2);
	return (0);
}
