/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:14:08 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/31 15:16:34 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hex.h"

void	ft_strzerochar(t_hdump *h)
{
	int		i;
	int		len;

	i = -1;
	if (h->c)
		len = 8;
	else
		len = 7;
	while (++i < len)
		h->first[i] = '0';
	h->first[i] = '\0';
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (i);
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr_fd(int fd, char *s)
{
	write(fd, s, ft_strlen(s));
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	if (s1[i] == s2[i])
		return (0);
	if (s1[i] > s2[i])
		return (1);
	return (-1);
}
