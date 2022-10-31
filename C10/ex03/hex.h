/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:37:20 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/31 17:13:33 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEX_H
# define HEX_H

# define BSIZE	16

/*
 * libgen for basename
 * fcntl for open & read
 * errno for errno
 * unistd for write & close
 * stdio for printf &  strerror
 * stdlib for malloc & free
 */
# include <libgen.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <errno.h>

typedef struct s_hdump
{
	char	**args;
	int		p;
	int		c;
	int		error;
	int		fd;
	int		ret;
	char	buf[BSIZE + 1];
	char	*first;
	char	w[33];
}	t_hdump;

// utlis.h
int		ft_strlen(char *s);
void	ft_putstr_fd(int fd, char *s);
int		ft_strcmp(char *s1, char *s2);
void	ft_strzerochar(t_hdump *h);
void	ft_init(t_hdump *h, char **av);

// error.c
int		ft_error(int fd, char *s);
int		ft_reterror(int fd, char *s);
int		ft_illegal(char *n);

// function.c
void	ft_addspace(int c);

//hex.c
void	ft_hex(char *s, t_hdump *h);

#endif
