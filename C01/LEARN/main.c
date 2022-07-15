/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:19:44 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/14 20:41:52 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	ft_numlen(long int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

int	ft_getonedigits(long int n)
{
	int	len;
	int	one;

	len = ft_numlen(n);
	one = 1;
	while (--len)
		one *= 10;
	return (one);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int ptr)
{
	long int	num;
	int			c;

	num = ptr;
	if (ptr < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	c = ft_getonedigits(num);
	while (c > 0)
	{
		ft_putchar('0' + num / c);
		num = num - (num / c) * c;
		c /= 10;
	}
}

int	main(void)
{
	ft_putnbr(INT_MIN);
	return (0);
}
