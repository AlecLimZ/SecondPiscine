/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:24:20 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/07 17:33:47 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int		count;
	int		nodes;
	int		f0;
	int		f1;
	int		f2;
	t_btree	*curr;

	if (root == NULL)
		return (0);
	count = 0;
	while (root)
	{
		nodes = ft_totalnodes(root);
		f0 = 0;
		f1 = 0;
		f2 = 0;
		while (nodes--)
		{
			curr = root;
			if (curr)
			{
				if (curr->left)
					root = curr->left;
				if (curr->right)
					root = curr->right;
				if (curr->item)
				{
					if (!f1)
						f1 = 1;
					if (f1 && f0)
						f2 = 1;
				}
				if (!curr->item && f1)
					f0 = 1;
			}
		}
		if (f1 && !f2)
			count++;
	}
	return (count);
}
