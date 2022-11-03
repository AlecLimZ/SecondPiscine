/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:24:14 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/03 18:35:52 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	main(void)
{
	t_btree	*tree;

	tree = btree_create_node("25");
	tree->left = btree_create_node("15");
	tree->right = btree_create_node("50");
	tree->left->left = btree_create_node("10");
	tree->left->right = btree_create_node("22");
	tree->left->left->left = btree_create_node("4");
	tree->left->left->right = btree_create_node("12");
	tree->left->right->left = btree_create_node("18");
	tree->left->right->right = btree_create_node("24");

	tree->right->left = btree_create_node("35");
	tree->right->right = btree_create_node("70");
	tree->right->left->left = btree_create_node("31");
	tree->right->left->right = btree_create_node("44");
	tree->right->right->left = btree_create_node("66");
	tree->right->right->right = btree_create_node("90");

//	btree_apply_prefix(tree, &printitem);
	btree_apply_infix(tree, &printitem);
	return (0);
}
