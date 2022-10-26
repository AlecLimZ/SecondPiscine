/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:01:47 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/26 16:27:18 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

char	*ft_strdup(char *src)
{
	char	*new;
	int		len;
	char	*getter;

	len = ft_strlen(src);
	new = (char *)malloc(sizeof(*new) * (len + 1));
	if (!new)
		return (NULL);
	getter = new;
	while (*src)
		*getter++ = *src++;
	*getter = '\0';
	return (new);
}
