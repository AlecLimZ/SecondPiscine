/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:15:18 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/02 14:24:13 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*first;

	first = ft_create_elem(data);
	if (!first)
		return ;
	if (first->next)
		printf("exist?\n");
	if (*begin_list != NULL)
		first->next = *begin_list;
	*begin_list = first;
}
