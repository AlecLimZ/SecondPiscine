/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:29:35 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/26 20:37:12 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}

int	ft_isnum(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	a;

	i = 0;
	s = 1;
	a = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i++] == '-')
		s *= -1;
	i = 0;
	while (str[i] && ft_isnum(str[i]))
		a = a * 10 + (str[i++] - '0');
	return (a * s);
}

char	*ft_strchr(char *s, char c)
{
	int	i;

	i = -1;
	while (s && s[++i])
		if (s[i] == c)
			return (s + i);
	return (NULL);
}

int	ft_verify(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		if (ft_strchr(s + i + 1, s[i]))
			return (0);
	if (ft_strchr(s, '-') || ft_strchr(s, '+'))
		return (0);
	return (1);
}
