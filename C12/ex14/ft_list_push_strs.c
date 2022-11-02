/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:51:11 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/02 14:24:26 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*new;
	int		i;

	i = -1;
	if (!strs)
		return (NULL);
	new = NULL;
	while (strs[++i] && i < size)
		ft_list_push_front(&new, strs[i]);
	return (new);
}
