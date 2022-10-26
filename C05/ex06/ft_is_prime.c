/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:53:19 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/24 21:18:37 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "co5.h"

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 0 || nb == 1 || nb == 2)
		return (0);
	if (nb % 2 == 0)
		return (0);
	while (i * i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}