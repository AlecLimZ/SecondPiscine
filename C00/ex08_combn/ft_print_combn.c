/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:06:16 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/08 12:36:07 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_combn(int n, char c)
{
	while (n)
	{
		write(1, &c, 1);
		ft_combn(--n, c + 1);
	}
}

void	ft_print_combn(int n)
{
	if (n <= 0 || n >= 10)
		return ;
	ft_combn(n, '0');
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
