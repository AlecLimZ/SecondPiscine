/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:25:10 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/07 13:07:21 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree	*r;

	r = *root;
	if (cmpf(item, r->item) >= 0)
	{
		if (r->right == NULL)
		{
			r->right = btree_create_node(item);
			return ;
		}
		else
			btree_insert_data(&r->right, item, cmpf);
	}
	else if (r->left == NULL)
	{
		r->left = btree_create_node(item);
		return ;
	}
	else
		btree_insert_data(&r->left, item, cmpf);
}
