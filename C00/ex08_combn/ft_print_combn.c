/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:06:16 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/12 13:46:59 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_end(char *tab, int size)
{
	int		count;
	int		index;
	char	num;

	count = 0;
	index = size;
	num = '9';
	while (--index >= 0)
	{
		if (tab[index] == num)
		{
			count++;
			num--;
		}
	}
	if (count == size)
		return (1);
	return (0);
}

void	ft_tabcomb(char *tab, int n)
{
	int	index;

	index = n - 1;
	while (--index >= 0)
		if (tab[index] != tab[index + 1] - 1)
			break ;
	tab[index]++;
	while (++index < n)
		tab[index] = tab[index - 1] + 1;
}

void	ft_print_combn(int n)
{
	char	*tab;
	int		index;

	if (n <= 0 || n >= 10)
		return ;
	tab = malloc(sizeof(char) * (n + 1));
	while (index < n)
		tab[index++] = '0';
	tab[index] = '\0';
	while (1)
	{
		if (tab[n - 1] == '9')
			ft_tabcomb(tab, n);
		else
			tab[n - 1]++;
		index = -1;
		while (++index < n)
			ft_putchar(tab[index]);
		if (!ft_end(tab, n))
			write(1, ", ", 2);
		else
			break ;
	}
	free(tab);
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
