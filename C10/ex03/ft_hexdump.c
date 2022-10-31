/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:09:25 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/31 18:37:52 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hex.h"

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

void	ft_finale(t_hdump *h)
{
	ft_putstr_fd(1, "\n");
	close(h->fd);
	free(h->first);
}

int	ft_open(t_hdump *h)
{
	h->fd = open(h->args[h->p], O_RDONLY);
	if (h->fd == -1)
		return (ft_error(2, "Failed open file\n"));
	ft_putstr_fd(1, h->first);
	return (0);
}

int	ft_loopread(t_hdump *h)
{
	while (h->ret && h->ret2)
	{
		h->ret = read(h->fd, h->buf, BSIZE);
		h->ret2 = read(h->fd, h->buf2, BSIZE);
		h->ret3 = read(h->fd, h->buf3, BSIZE);
		if (h->ret == -1 || h->ret2 == -1 || h->ret3 == -1)
			return (ft_reterror(2, "Failing read a file\n"));
		h->buf[h->ret] = '\0';
		h->buf2[h->ret2] = '\0';
		h->buf3[h->ret3] = '\0';
		ft_addspace(h->c);
		ft_hex(h->buf, h);
		ft_addspace(h->c);
		ft_hex(h->buf2, h);
		if (!h->ret3)
			break ;
		ft_addspace(h->c);
		ft_hex(h->buf3, h);
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_hdump		h;

	ft_init(&h, av);
	if (ft_parser(ac, &h) || ft_open(&h) || ft_loopread(&h))
		return (1);
	ft_finale(&h);
	return (errno);
}
