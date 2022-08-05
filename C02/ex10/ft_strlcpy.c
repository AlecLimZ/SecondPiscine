/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:11:48 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/05 20:25:03 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = -1;
	if (size == 0)
		return (ft_strlen(src));
	while (++i < size - 1)
		dest[i] = src[i];
	if (size > 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}
