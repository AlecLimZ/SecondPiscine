/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:36:57 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/24 19:49:44 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "co5.h"

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power--)
		i *= nb;
	return (i);
}
