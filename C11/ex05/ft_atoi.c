/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:28:21 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/01 21:13:59 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do.h"

int	ft_isop(char *s)
{
	if ((s[0] == '+' || s[0] == '-' || s[0] == '/'
			|| s[0] == '*' || s[0] == '%')
		&& ft_strlen(s) == 1)
		return (1);
	write(1, "0\n", 2);
	return (0);
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

int	ft_ispace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\f' || c == '\r');
}

int	ft_isnbr(char c)
{
	return (c >= '0' && c <= '9');
}

long	ft_atoi(char *s)
{
	long	total;
	int		sign;
	int		i;

	total = 0;
	sign = 1;
	i = 0;
	while (ft_ispace(s[i]))
		i++;
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i++] == '-')
			sign *= -1;
	}
	while (ft_isnbr(s[i]))
		total = total * 10 + (s[i++] - '0');
	return (total * sign);
}
