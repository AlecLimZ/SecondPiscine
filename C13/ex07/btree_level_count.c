/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:24:20 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/08 12:28:21 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	left_side;
	int	right_side;

	if (!root)
		return (0);
	left_side = btree_level_count(root->left);
	right_side = btree_level_count(root->right);
	if (left_side >= right_side)
		return (left_side + 1);
	return (right_side + 1);
}
