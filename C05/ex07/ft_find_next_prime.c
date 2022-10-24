/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:30:47 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/24 21:47:31 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "co5.h"

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb + 1;
	if (nb < 2)
		return (2);
	if (nb == 2)
		return (3);
	while (1)
	{
		if (i % 2 != 0 && i % 3 != 0)
			return (i);
		i++;
	}
	return (nb);
}
