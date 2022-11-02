/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:59:39 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/02 14:07:40 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_printlist(t_list *l)
{
	while (l)
	{
		ft_putstr_fd(1, l->data);
		ft_putstr_fd(1, "\n");
		l = l->next;
	}
}

void	ft_putchar_fd(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(int fd, char *s)
{
	write(fd, s, ft_strlen(s));
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

char	*ft_strdup(char *s)
{
	int		i;
	char	*new;

	new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new || !s)
		return (NULL);
	i = -1;
	while (s[++i])
		new[i] = s[i];
	new[i] = '\0';
	return (new);
}
