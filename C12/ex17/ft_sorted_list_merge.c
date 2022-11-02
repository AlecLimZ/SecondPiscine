/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:03:07 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/02 20:14:36 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
			int (*cmp)())
{
	t_list	*b;
	char	*ori;

	b = *begin_list1;
	while (b)
	{
		ori = ft_strdup(b->data);
		b->data = ft_strcat(b->data, begin_list2->data);
		if (cmp(b->data, b->next->data) != -1)
		{
			free(b->data);
			b->data = ori;
		}
		b = b->next;
	}
}
