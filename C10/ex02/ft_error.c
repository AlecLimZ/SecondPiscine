/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:49:08 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/30 20:11:49 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	msgerror(char *e)
{
	ft_putstr_fd(2, basename(e));
	ft_putstr_fd(2, ": ");
	ft_putstr_fd(2, strerror(errno));
	ft_putstr_fd(2, "\n");
	return (1);
}

void	tailerror(char *s)
{
	ft_putstr_fd(2, "ft_tail: invalid number of bytes: ");
	ft_putstr_fd(2, s);
	ft_putstr_fd(2, "\n");
}
