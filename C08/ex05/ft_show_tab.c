/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:16:46 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/28 18:35:49 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

void	ft_putnbr(int nb)
{
	char	c[10];
	int		i;

	if (nb < 0)
		ft_putstr("-");
	i = 0;
	while (nb > 0)
	{
		c[i++] = '0' + nb % 10;
		nb /= 10;
	}
	while (--i >= 0)
		write(1, &c[i], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = -1;
	while (par && par[++i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
	}
}

int	main(int ac, char **av)
{
	t_stock_str	*stocks;
	int			i;

	i = -1;
	stocks = ft_strs_to_tab(ac, av + 1);
	if (!stocks)
		printf("error\n");
	ft_show_tab(stocks);
	free(stocks);
	return (0);
}
