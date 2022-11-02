/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:46:20 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/02 20:00:43 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*new;
	t_list	*tmp;
	t_list	*b;

	new = ft_create_elem(data);
	b = *begin_list;
	while (b->next)
	{
		if (cmp(new->data, b->data) == -1
			&& cmp(new->data, b->next->data) == 1)
		{
			tmp = b->next;
			b->next = new;
			b->next->next = tmp;
			break ;
		}
		b = b->next;
	}
}
