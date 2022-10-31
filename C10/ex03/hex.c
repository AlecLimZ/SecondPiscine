/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:08:49 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/31 18:29:14 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hex.h"

static void	ft_firsthex(t_hdump *h, int count)
{
	char const		hex[16] = "0123456789abcdef";
	int				nb;
	int				pos;

	nb = count;
	pos = 0;
	while (h->first[pos])
		pos++;
	while (nb)
	{
		if (nb >= 16)
		{
			h->first[--pos] = hex[nb % 16];
			nb /= 16;
			continue ;
		}
		h->first[--pos] = hex[nb];
		nb /= 16;
	}
}

static void	ft_last(char *s)
{
	char	*new;
	int		i;
	int		p;

	i = -1;
	p = 0;
	(void)s;
	new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 2 + 1));
	new[p++] = '|';
	while (s[++i])
	{
		if (s[i] == '\t' || s[i] == '\n')
			new[p++] = '.';
		else
			new[p++] = s[i];
	}
	new[p++] = '|';
	new[p] = '\0';
	ft_putstr_fd(1, new);
	free(new);
}

static void	ft_w(char *w, t_hdump *h, char *s)
{
	int		i;

	i = -1;
	while (w[++i])
	{
		write(1, &w[i], 1);
		if (i == 15)
			ft_addspace(h->c);
		else if (i % 2 != 0 && i != (ft_strlen(w) - 1))
			write(1, " ", 1);
	}
	if (h->c)
	{
		ft_addspace(h->c);
		ft_last(s);
	}
	write(1, "\n", 1);
}

static void	ft_hex2(int k, int count, t_hdump *h, char *s)
{
	while (k < BSIZE * 2)
		h->w[k++] = ' ';
	h->w[k] = '\0';
	ft_w(h->w, h, s);
	if ((h->buf3[0] == '\n' || h->buf3[0] == '\0') && h->error == 1)
	{
		ft_argerror(2, h->args[2], "No such file or directory\n");
		h->error = 0;
	}
	if (count)
	{
		ft_firsthex(h, count);
		ft_putstr_fd(1, h->first);
	}
}

void	ft_hex(char *s, t_hdump *h)
{
	char const		hex[16] = "0123456789abcdef";
	int				i;
	int				k;
	int				n;

	i = -1;
	k = 0;
	while (s[++i])
	{
		n = s[i];
		if (n > 16)
		{
			h->w[k + 1] = hex[n % 16];
			h->w[k] = hex[n / 16];
		}
		else
		{
			h->w[k] = '0';
			h->w[k + 1] = hex[n];
		}
		k += 2;
		h->count++;
	}
	ft_hex2(k, h->count, h, s);
}
