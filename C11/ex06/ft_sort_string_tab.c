/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:42:23 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/01 21:49:37 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_string_tab(char **tab)
{
	char	*tmp;
	int		i;
	int		j;

	i = -1;
	while (tab[++i + 1])
	{
		j = i;
		while (tab[++j])
		{
			if (tab[i][0] > tab[j][0])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
		}
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = -1;
	if (ac <= 1)
		return (1);
	ft_sort_string_tab(av);
	while (av[++i])
		printf("av[%d]: %s\n", i, av[i]);
	return (0);
}
