/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:10:57 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/07 13:24:32 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	ft_strcmpatoi(void *s1, void *s2)
{
	int	a;
	int	b;

	a = ft_atoi(s1);
	b = ft_atoi(s2);
	if (a == b)
		return (0);
	if (a > b)
		return (1);
	return (-1);
}

int	ft_isnbr(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v');
}

int	ft_atoi(char *s)
{
	long	total;
	int		sign;
	int		i;

	total = 0;
	sign = 1;
	i = 0;
	if (!s)
		return (0);
	while (ft_isspace(s[i]))
		i++;
	while (s[i] == '+' || s[i] == '-')
		if (s[i++] == '-')
			sign *= -1;
	while (ft_isnbr(s[i]))
		total = total * 10 + (s[i++] - '0');
	return (total * sign);
}
