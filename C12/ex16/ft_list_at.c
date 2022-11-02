/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:43:11 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/02 14:48:36 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	index;
	t_list			*check;

	index = 0;
	check = begin_list;
	if (!begin_list)
		return (NULL);
	while (check)
	{
		if (index == nbr)
			break ;
		check = check->next;
		index++;
	}
	if (index != nbr)
		return (NULL);
	return (check);
}
