/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:04:19 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/28 17:48:53 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	char	*new;
	int		i;

	new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new || !s)
		return (NULL);
	i = -1;
	while (s[++i])
		new[i] = s[i];
	new[i] = '\0';
	return (new);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*new;
	int			i;

	if (ac <= 0)
		return (NULL);
	new = (t_stock_str *)malloc(sizeof(t_stock_str) * ac);
	if (!new)
		return (NULL);
	i = -1;
	while (av[++i])
	{
		new[i].size = ft_strlen(av[i]);
		new[i].str = av[i];
		new[i].copy = ft_strdup(new[i].str);
	}
	new[i].size = 0;
	new[i].str = 0;
	new[i].copy = 0;
	return (new);
}

int	main(int ac, char **av)
{
	t_stock_str	*stocks;
	int			i;

	i = -1;
	stocks = ft_strs_to_tab(ac, av + 1);
	if (!stocks)
		printf("error\n");
	while (stocks && stocks[++i].str != 0)
	{
		printf("size: %d\n", stocks[i].size);
		printf("str: %s\n", stocks[i].str);
		printf("copy: %s\n", stocks[i].copy);
		free(stocks[i].copy);
		stocks[i].copy = NULL;
	}
	free(stocks);
	return (0);
}
