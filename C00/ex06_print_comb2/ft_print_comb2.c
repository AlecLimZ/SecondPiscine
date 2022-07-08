/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:34:32 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/06 15:55:45 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcombo(char a1, char a2, char b1, char b2)
{
	ft_putchar(a1);
	ft_putchar(a2);
	ft_putchar(' ');
	ft_putchar(b1);
	ft_putchar(b2);
	if (a1 != '9' || a2 != '8' || b1 != '9' || b2 != '9')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = '/';
	while (++a1 <= '9')
	{
		a2 = '/';
		while (++a2 <= '8')
		{
			b1 = a1 - 1;
			while (++b1 <= '9')
			{
				b2 = a2;
				while (++b2 <= '9')
					ft_putcombo(a1, a2, b1, b2);
			}
		}
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
