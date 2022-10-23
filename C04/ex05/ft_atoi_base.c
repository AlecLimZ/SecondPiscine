/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:16:58 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/23 22:49:12 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "co4.h"

int	ft_atoi_base(char *str, char *base)
{
	int	len;
	int	pos[42];
	int	f;
	int	nbr;
	int	i;

	len = ft_strlen(base);
	f = 0;
	i = 0;
	nbr = ft_atoi(str);
	if (!ft_verify(base) || len <= 1)
		return (0);
	if (nbr == 0)
		return (base[nbr] - '0');
	while (nbr > 0)
	{
		pos[i++] = nbr % len;
		nbr /= len;
	}
	while (--i >= 0)
		f = f * 10 + base[pos[i]] - '0';
	return (f);
}
