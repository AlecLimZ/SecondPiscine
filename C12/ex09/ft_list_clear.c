/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:07:30 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/02 14:40:54 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_freedata(void *data)
{
	if (data)
		free(data);
}

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*tmp;

	while (begin_list)
	{
		free_fct(begin_list->data);
		tmp = begin_list->next;
		free(begin_list);
		begin_list = tmp;
	}
}

void	ft_freelist(t_list *l)
{
	t_list	*tmp;

	while (l)
	{
		if (l->data)
			free(l->data);
		tmp = l->next;
		free(l);
		l = tmp;
	}
}
