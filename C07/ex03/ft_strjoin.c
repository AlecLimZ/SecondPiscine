/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:06:47 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/26 18:32:50 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

int	ft_allocate(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = -1;
	len = 0;
	while (strs && ++i < size)
	{
		if (i != size - 1)
			len += ft_strlen(strs[i]) + ft_strlen(sep);
		else
			len += ft_strlen(strs[i]);
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	int			j;
	int			k;
	char		*new;
	int const	len = ft_allocate(size, strs, sep);

	new = (char *)malloc(sizeof(char) * (len + 1));
	k = 0;
	i = -1;
	while (strs && strs[++i])
	{
		j = 0;
		while (strs[i][j])
			new[k++] = strs[i][j++];
		j = 0;
		while (sep && i != size - 1 && sep[j])
			new[k++] = sep[j++];
	}
	new[k] = '\0';
	return (new);
}

int	main(int ac, char **av)
{
	char	*final;

	final = ft_strjoin(ac, av, NULL);
	printf("%s\n", final);
}
