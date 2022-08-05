/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:58:41 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/04 19:44:12 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (++i < n && src[i])
		dest[i] = src[i];
	if ((unsigned int)ft_strlen(src) < n)
		dest[i] = '\0';
	return (dest);
}
