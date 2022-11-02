/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:26:34 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/02 13:39:19 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*end;
	t_list	*begin;

	begin = *begin_list;
	end = ft_create_elem(data);
	if (!end)
		return ;
	while (begin->next)
		begin = begin->next;
	begin->next = end;
}
