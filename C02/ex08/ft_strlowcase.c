/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:10:54 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/05 18:53:53 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isuppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (ft_isuppercase(str[i]))
				str[i] += 32;
	return (str);
}
