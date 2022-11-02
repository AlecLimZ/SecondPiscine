/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:23:03 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/02 19:39:33 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (-42);
	while (s1 && s1[i] && s1[i] == s2[i])
		i++;
	if (s1 && s1[i] == '\0' && s2[i] == '\0')
		return (0);
	if (s1 && s1[i] > s2[i])
		return (1);
	return (-1);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	if (!s2)
		return (s1);
	while (s1[i])
		i++;
	while (s2[j])
		s1[i++] = s2[j++];
	s1[i] = '\0';
	return (s1);
}
