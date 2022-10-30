/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:36:59 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/30 21:08:31 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strdup(char *s)
{
	char	*new;
	int		i;

	if (!s)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new)
		return (NULL);
	i = -1;
	while (s[++i])
		new[i] = s[i];
	new[i] = '\0';
	return (new);
}

char	*ft_stradd(char *last, t_tail *t)
{
	char	*new;
	int		len;
	int		i;

	new = (char *)malloc(sizeof(char) * (t->csize + 1));
	len = ft_strlen(t->buf);
	i = 0;
	while (last[len])
		new[i++] = last[len++];
	free(last);
	len = 0;
	while (t->buf[len])
		new[i++] = t->buf[len++];
	new[i] = '\0';
	return (new);
}

void	ft_init(t_tail *t, char **av)
{
	t->args = av + 1;
	t->ret = 1;
	t->c = 0;
	t->csize = -1;
	t->nb = 0;
	t->file = -1;
}

void	ft_end(t_tail *t, char *last)
{
	ft_putstr_fd(1, last);
	close(t->fd);
	free(t->buf);
	free(last);
}

int	main(int ac, char **av)
{
	t_tail	t;
	char	*last;

	ft_init(&t, av);
	if (ft_parser(ac, &t))
		return (1);
	t.buf = (char *)malloc(sizeof(char) * (t.csize + 1));
	if (!t.buf)
		return (1);
	last = NULL;
	while (t.ret)
	{
		t.ret = read(t.fd, t.buf, t.csize);
		if (t.ret == -1)
			return (msgerror(t.args[t.file]));
		t.buf[t.ret] = '\0';
		if (!last)
			last = ft_strdup(t.buf);
		if (t.ret)
			last = ft_stradd(last, &t);
	}
	ft_end(&t, last);
	return (errno);
}
