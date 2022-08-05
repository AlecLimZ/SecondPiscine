/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:11:19 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/05 19:03:25 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two.h"

int	ft_isit(char c)
{
	return (c > 27 && c < 48);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (!ft_isit(str[i]) && ft_islowercase(str[i]))
			str[i] -= 32;
	while (str[++i])
	{
		if (ft_isit(str[i]) && str[i + 1] && !ft_isit(str[i + 1])
			&& ft_islowercase(str[i + 1]))
			str[i + 1] -= 32;
	}
	return (str);
}
