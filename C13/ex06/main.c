/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:24:14 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/07 17:54:55 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	main(void)
{
	t_btree	*tree;
	int		levels;

	tree = btree_create_node("25");
	tree->left = btree_create_node("15");
	tree->right = btree_create_node("50");
	btree_insert_data(&tree, "100", &ft_strcmpatoi);
	btree_insert_data(&tree, "105", &ft_strcmpatoi);
	btree_insert_data(&tree, "70", &ft_strcmpatoi);
	levels = btree_level_count(tree);
	printf("levels: %d\n", levels);
//	btree_apply_prefix(tree, &printitem);
//	btree_apply_infix(tree, &printitem);
//	btree_apply_suffix(tree, &printitem);
	return (0);
}
