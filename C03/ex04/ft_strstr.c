/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:54:28 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/23 14:11:20 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "co3.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		len;
	int		i;

	len = ft_strlen(to_find);
	i = -1;
	while (str[++i])
		if (!ft_strncmp(str + i, to_find, len))
			return (str + i);
	return (NULL);
}
