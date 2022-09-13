/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:25:33 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/13 21:52:37 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two.h"
#include <string.h>
#include <stdio.h>

int ft_fun(char *s)
{
	int	i;

	i = 0;
	while (*s)
		i += *s++;
	return (i);
}

int	main(int ac, char **av)
{
	(void) ac;
	av[1] = "bonjour";
	int *tab;
	char	*t = "bonjour";

	tab = malloc(sizeof(int) * 10);
	tab[0] = 4;
	tab[1] = 22;
	tab[2] = 10;
	tab[3] = 8;
	tab[4] = 9;
	tab[5] = 0;
	tab[6] = 34;
	tab[7] = 16;
	tab[8] = 4533;
	tab[9] = 35;

	ft_print_memory(t, ft_strlen(t));
	return (0);
}
