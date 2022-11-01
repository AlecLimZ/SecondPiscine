/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:25:17 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/01 19:24:37 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef LEN
# define LEN 5
#endif

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (i);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	char	*new;
	int		i;

	new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = -1;
	while (s[++i])
		new[i] = s[i];
	new[i] = '\0';
	return (new);
}

int	ft_lessthan6(char *s)
{
	if (ft_strlen(s) > 5)
		return (0);
	return (1);
}

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	c;

	i = -1;
	c = 0;
	while (++i < length)
		if (f(tab[i]))
			c++;
	return (c);
}

int	main(void)
{
	char	**tab;
	int		i;

	tab = (char **)malloc(sizeof(char *) * (LEN + 1));
	i = -1;
	while (++i < LEN)
		tab[i] = ft_strdup("hello");
	tab[i] = NULL;
	i = -1;
	printf("count: %d\n", ft_count_if(tab, 2, &ft_lessthan6));
	while (++i < LEN)
	{
		write(1, tab[i], ft_strlen(tab[i]));
		free(tab[i]);
	}
	free(tab);
}
