/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:24:55 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/28 01:51:08 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (i);
	while (s && s[i])
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, int len)
{
	int	i;

	i = 0;
	while (i < len && s1 && s1[i] == s2[i])
		i++;
	if (i == len)
		return (0);
	if (s1[i] > s2[i])
		return (1);
	return (-1);
}

char	**ft_mallocsplit(char ***new, char *str, char *set, int *init)
{
	int		count;
	int		i;
	int		strs;

	count = 0;
	i = -1;
	strs = 0;
	*init = 0;
	while (str && str[++i])
	{
		if (!ft_strncmp(str + i, set, ft_strlen(set)))
		{
			i += ft_strlen(set) - 1;
			if (count && ++strs)
				count = 0;
		}
		else
			count++;
	}
	if (count)
		strs++;
	*new = (char **)malloc(sizeof(char *) * (strs + 1));
}

char	*ft_strdupos(char *s, int start, int end, int *count)
{
	int		i;
	char	*new;

	new = (char *)malloc(sizeof(char) * (end - start + 1));
	i = 0;
	while (s && s[start] && start < end)
		new[i++] = s[start++];
	new[i] = '\0';
	*count = 0;
	return (new);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		count;
	int		index;
	int		i;

	if (!str || !charset)
		return (NULL);
	ft_mallocsplit(&split, str, charset, &count);
	i = -1;
	index = 0;
	while (str && str[++i])
	{
		if (!ft_strncmp(str + i, charset, ft_strlen(charset)))
		{
			if (count)
				split[index++] = ft_strdupos(str, i - count, i, &count);
			i += ft_strlen(charset) - 1;
		}
		else
			count++;
	}
	if (count)
		split[index++] = ft_strdupos(str, i - count, i, &count);
	split[index] = NULL;
	return (split);
}

int	main(int ac, char **av)
{
	int		i;
	char	**box;

	if (ac <= 1)
		return (0);
	box = ft_split(av[1], "@@");
	i = -1;
	while (box && box[++i])
	{
		printf("box: %s\n", box[i]);
		free(box[i]);
	}
	free(box);
	return (0);
}
