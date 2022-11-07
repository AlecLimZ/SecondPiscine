/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:29:14 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/07 15:54:07 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

static int	left_sides(t_btree *root)
{
	int	ht;

	ht = 0;
	while (root)
	{
		ht++;
		root = root->left;
	}
	return (ht);
}

static int	right_sides(t_btree *root)
{
	int	ht;

	ht = 0;
	while (root)
	{
		ht++;
		root = root->right;
	}
	return (ht);
}

int	ft_totalnodes(t_btree *root)
{
	int	left;
	int	right;

	if (!root)
		return (0);
	left = left_sides(root);
	right = right_sides(root);
	if (left == right)
		return ((1 << left) - 1);
	return (1 + ft_totalnodes(root->left) + ft_totalnodes(root->right));
}

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	t_btree	*l;
	t_btree	*r;

	if (!root)
		return (NULL);
	l = btree_search_item(root->left, data_ref, cmpf);
	if (l)
		return (l);
	if (cmpf(root->item, data_ref) == 0)
		return (root);
	r = btree_search_item(root->right, data_ref, cmpf);
	return (r);
}
