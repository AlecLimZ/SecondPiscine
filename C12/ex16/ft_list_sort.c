/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:32:41 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/02 19:41:02 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*sort;
	char	*tmp;
	t_list	*clone;

	sort = *begin_list;
	while (sort->next)
	{
		clone = *begin_list;
		while (clone)
		{
			if (cmp(sort->data, clone->data) == -1)
			{
				tmp = sort->data;
				sort->data = clone->data;
				clone->data = tmp;
			}
			clone = clone->next;
		}
		sort = sort->next;
	}
}
