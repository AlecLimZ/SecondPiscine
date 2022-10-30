/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:37:45 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/30 19:08:25 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_display(t_tail *t)
{
	printf("==My tail status==\n");
	printf("ret: %d\n", t->ret);
	printf("c: %d\n", t->c);
	printf("nb: %d\n", t->nb);
	printf("csize: %d\n", t->csize);
	printf("file args index: %d\n", t->file);
}
