/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:19:30 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/31 18:29:40 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hex.h"

int	ft_illegal(char *n)
{
	ft_putstr_fd(2, "ft_hexdump: illegal option -");
	ft_putstr_fd(2, n);
	ft_putstr_fd(2, "\n");
	return (1);
}

int	ft_error(int fd, char *s)
{
	ft_putstr_fd(fd, s);
	return (fd);
}

int	ft_reterror(int fd, char *s)
{
	ft_putstr_fd(fd, s);
	return (fd);
}

int	ft_argerror(int fd, char *s, char *m)
{
	ft_putstr_fd(fd, "hexdump: ");
	ft_putstr_fd(fd, s);
	ft_putstr_fd(fd, ": ");
	ft_putstr_fd(fd, m);
	return (fd);
}
