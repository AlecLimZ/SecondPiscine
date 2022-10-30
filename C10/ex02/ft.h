/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:37:20 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/30 20:48:38 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BSIZE	42

# include <libgen.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <errno.h>

typedef struct s_tail
{
	char	**args;
	char	*buf;
	int		ret;
	int		fd;
	int		c;
	int		nb;
	int		csize;
	int		file;
}	t_tail;

// utils.c
int		ft_isallnbr(char *s);
int		ft_stoi(char *s);
int		ft_strlen(char *s);
void	ft_putstr_fd(int fd, char *s);
int		ft_strncmp(char *s1, char *s2, int len);

//ft_parser.c
int		ft_parser(int ac, t_tail *t);

//ft_error.c
int		msgerror(char *e);
void	tailerror(char *s);

//misc.c
void	ft_display(t_tail *t);
#endif
