/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:09:25 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/31 16:09:20 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hex.h"

void	ft_init(t_hdump *h, char **av)
{
	h->args = av;
	h->c = 0;
	h->fd = -1;
	h->ret = 1;
	h->p = 0;
	h->error = 0;
}

int	ft_parser(int ac, t_hdump *h)
{
	if (ac <= 1)
		return (ft_error(2, "File is missing\n"));
	if (ac > 3)
		return (ft_error(2, "Too many argument\n"));
	if (!ft_strcmp(h->args[1], "-C"))
		h->c = 1;
	else if (h->args[1][0] == '-')
		return (ft_illegal(h->args[1]));
	else
		h->p = 1;
	if (h->p && h->args[2])
		h->error = 1;
	else if (!h->p)
		h->p = 2;
	if (h->c)
		h->first = (char *)malloc(sizeof(char) * 9);
	else
		h->first = (char *)malloc(sizeof(char) * 8);
	ft_strzerochar(h);
	return (0);
}

void	ft_firsthex(t_hdump *h, int count)
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
			continue;
		}
		h->first[--pos] = hex[nb];
		nb /= 16;
	}
}

void	ft_w(char *w, int c)
{
	int	i;

	i = -1;
	while (w[++i])
	{
		write(1, &w[i], 1);
		if (i == 15)
			ft_addspace(c);
		else if (i % 2 != 0)
			write(1, " ", 1);
	}
	write(1, "\n", 1);
}

void	*ft_hex(char *s, t_hdump *h)
{
	char const		hex[16] = "0123456789abcdef";
	static int		count;
	int				i;
	int				k;
	int				n;
	char			w[33];

	i = -1;
	k = 0;
	while (s[++i])
	{
		n = s[i];
		if (n > 16)
		{
			w[k + 1] = hex[n % 16];
			w[k] = hex[n / 16];
		}
		else
		{
			w[k] = '0';
			w[k + 1] = hex[n];
		}
		k += 2;
		count++;
	}
	w[k] = '\0';
	ft_w(w, h->c);
	if (count)
	{
		ft_firsthex(h, count);
		ft_putstr_fd(1, h->first);
	}
	return (s);
}

int	main(int ac, char **av)
{
	t_hdump	h;
	static int	total;

	ft_init(&h, av);
	if (ft_parser(ac, &h))
		return (1);
	h.fd = open(av[h.p], O_RDONLY | S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (h.fd == -1)
		return (ft_error(2, "Failed open file\n"));
	h.ret = 1;
	ft_putstr_fd(1, h.first);
	while (h.ret)
	{
		h.ret = read(h.fd, h.buf, BSIZE);
		if (h.ret == -1)
			return (ft_reterror(2, "Failing read a file\n"));
		h.buf[h.ret] = '\0';
		if (!h.ret)
			break ;
		ft_addspace(h.c);
		total += h.ret;
		ft_hex(h.buf, &h);
	}
	ft_putstr_fd(1, "\n");
	close(h.fd);
	free(h.first);
	return (errno);
}
