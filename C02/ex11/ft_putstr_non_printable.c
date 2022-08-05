/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:25:56 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/05 20:25:59 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two.h"

int	ft_isprintable(char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_hex(int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n > 16)
	{
		ft_hex(n / 16);
		ft_hex(n % 16);
	}
	else
		write(1, &hex[n], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (ft_isprintable(str[i]))
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			write(1, "0", 1);
			ft_hex(str[i]);
		}
	}
}
