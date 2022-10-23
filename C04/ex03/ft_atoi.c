/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:51:27 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/23 22:09:59 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "co4.h"

int	ft_isspace(char c)
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
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			s *= -1;
	while (str[i] && ft_isnum(str[i]))
		a = a * 10 + (str[i++] - '0');
	return (a * s);
}
