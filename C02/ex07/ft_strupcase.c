/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:10:24 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/04 20:28:32 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (ft_islowercase(str[i]))
				str[i] -= 32;
	return (str);
}
