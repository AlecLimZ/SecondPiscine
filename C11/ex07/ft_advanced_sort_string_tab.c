/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:42:23 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/01 21:55:35 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	if (s1[i] > s2[i])
		return (1);
	return (-1);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(tab[i], tab[j]) == 1)
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
	ft_advanced_sort_string_tab(av, &ft_strcmp);
	while (av[++i])
		printf("av[%d]: %s\n", i, av[i]);
	return (0);
}
