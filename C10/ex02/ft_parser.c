/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:47:21 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/30 20:48:31 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

static int	ft_checkc(t_tail *t, int *i)
{
	if (t->c == 0 && !ft_strncmp(t->args[*i], "-c", 2))
	{
		if (ft_strlen(t->args[*i]) > 2)
		{
			if (ft_isallnbr(t->args[*i] + 2))
				t->csize = ft_stoi(t->args[*i] + 2);
			else
			{
				tailerror(t->args[*i] + 2);
				return (0);
			}
			t->nb = 1;
		}
		t->c = 1;
		if (!t->args[*i + 1] && t->nb == 0)
		{
			ft_putstr_fd(2, "tail: option requires an argument -- 'c'\n");
			return (0);
		}
		*i = *i + 1;
	}
	return (1);
}

static int	ft_checknb(t_tail *t, int *i)
{
	if (t->nb == 0 && t->c)
	{
		if (ft_isallnbr(t->args[*i]))
		{
			t->csize = ft_stoi(t->args[*i]);
			t->nb = 1;
		}
		else
		{
			tailerror(t->args[*i]);
			return (0);
		}
		*i = *i + 1;
	}
	return (1);
}

static int	ft_checkac(int ac)
{
	if (ac <= 1)
	{
		ft_putstr_fd(2, "File name missing\n");
		return (0);
	}
	if (ac > 4)
	{
		ft_putstr_fd(2, "Too many arguments\n");
		return (0);
	}
	return (1);
}

int	ft_parser(int ac, t_tail *t)
{
	int	i;

	if (!ft_checkac(ac))
		return (1);
	i = -1;
	while (t->args[++i])
	{
		if (!ft_checkc(t, &i))
			return (1);
		else if (!ft_checknb(t, &i))
			return (1);
		else if (t->file == -1)
			t->file = i;
	}
	t->fd = open(t->args[t->file], O_RDWR | O_APPEND, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IROTH);
	if (t->fd == -1)
	{
		msgerror(t->args[0]);
		return (1);
	}
	return (0);
}
