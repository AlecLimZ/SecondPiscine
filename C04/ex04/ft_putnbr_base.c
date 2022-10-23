/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:31:05 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/23 22:50:14 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "co4.h"

char	*ft_strchr(char *s, char c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (s + i);
	return (NULL);
}

int	ft_verify(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		if (ft_strchr(s + i + 1, s[i]))
			return (0);
	if (ft_strchr(s, '-') || ft_strchr(s, '+'))
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	pos[42];
	int	i;

	len = ft_strlen(base);
	i = 0;
	if (!base || !ft_verify(base) || len <= 1)
		return ;
	if (nbr == 0)
		ft_putchar(base[nbr]);
	while (nbr > 0)
	{
		pos[i++] = nbr % len;
		nbr /= len;
	}
	while (--i >= 0)
		ft_putchar(base[pos[i]]);
	ft_putchar('\n');
}
