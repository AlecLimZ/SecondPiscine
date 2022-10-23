/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:56:35 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/23 17:44:39 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "co4.h"

int	ft_intlen(long nb)
{
	int	l;

	l = 0;
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		l++;
		nb /= 10;
	}
	return (l);
}

void	ft_putnbr(int nb)
{
	int		m;
	int		len;
	long	n;

	n = nb;
	m = 1;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	len = ft_intlen(n);
	while (--len)
		m *= 10;
	while (m > 0)
	{
		ft_putchar((n / m % 10) + '0');
		m /= 10;
	}
	ft_putchar('\n');
}
