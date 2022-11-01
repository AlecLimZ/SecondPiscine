/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:25:17 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/01 17:41:51 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = -1;
	while (tab[++i])
		if (f(tab[i]))
			return (1);
	return (0);
}

int	main(void)
{
	char	**tab;
	int		i;

	tab = (char **)malloc(sizeof(char *) * 4);
	i = -1;
	while (++i < 3)
		tab[i] = ft_strdup("hellasdo");
	tab[i] = NULL;
	i = -1;
	if (ft_any(tab, &ft_lessthan6))
		printf("yaya all strings in tab is less than 6\n");
	else
		printf("sorry, one of strings more than 5\n");
	while (++i < 3)
	{
		write(1, tab[i], ft_strlen(tab[i]));
		free(tab[i]);
	}
	free(tab);
}
