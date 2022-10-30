/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:49:44 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/30 21:05:27 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_isallnbr(char *s)
{
	while (*s && *s >= '0' && *s <= '9')
		s++;
	if (*s == '\0')
		return (1);
	return (0);
}

int	ft_stoi(char *s)
{
	int	new;
	int	i;

	i = -1;
	new = 0;
	while (s[++i])
		new = new * 10 + s[i] - '0';
	return (new);
}

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

void	ft_putstr_fd(int fd, char *s)
{
	write(fd, s, ft_strlen(s));
}

int	ft_strncmp(char *s1, char *s2, int len)
{
	int	i;

	i = 0;
	while (i < len && s1[i] == s2[i])
		i++;
	if (i == len)
		return (0);
	if (s1[i] > s2[i])
		return (1);
	return (-1);
}
