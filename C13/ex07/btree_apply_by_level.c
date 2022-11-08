/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:10:13 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/08 14:55:51 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	print_level(t_btree *root, int level_no)
{
	if (!root)
		return ;
	if (level_no == 0)
		printf("%s -> ", root->item);
	else
	{
		print_level(root->left, level_no - 1);
		print_level(root->right, level_no - 1);
	}
}


// flag
// 0 = found first node of level but wrong
// 1 = found first node of level
int	is_firstnode(t_btree *root, int level, void *item, int flag)
{
	int	l;
	int	r;

	if (!root)
		return (-1);
	if (flag == 0 && level == 0)
	{
		flag = 1;
		if (ft_strcmp(item, root->item) == 0)
			return (1);
		else
			return (0);
	}
	l = is_firstnode(root->left, level - 1, item, flag);
	if (l == -1)
		r = is_firstnode(root->right, level - 1, item, flag);
	else
		return (l);
	return (r);
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first))
{
	int	i;
	int	is;

	i = -1;
	while (++i < btree_level_count(root))
	{
		printf("level %d: ", i + 1);
		print_level(root, i);
		is = is_firstnode(root, i, "100", 0);
		printf("is status: %d\n", is);
	}
	(void)applyf;
}
