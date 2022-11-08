/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:10:13 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/08 16:27:36 by leng-chu         ###   ########.fr       */
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

void	f_test(void *item, int current_level, int is_first)
{
	if (is_first)
		printf("Yes %s is the first node of level %d\n", item, current_level);
	else
		printf("No %s is not the first node of level %d\n", item, current_level);
}

void	items(t_btree *root, int level_no, int *pos, char **nodes)
{
	if (!root)
		return ;
	if (level_no == 0)
		nodes[(*pos)++] = root->item;
	else
	{
		items(root->left, level_no - 1, pos, nodes);
		items(root->right, level_no - 1, pos, nodes);
	}
	nodes[*pos] = NULL;
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first))
{
	int				i;
	int				is;
	char			**nodes;
	int				p;

	i = -1;
	nodes = (char **)malloc(sizeof(char *) * (ft_totalnodes(root) + 1));
	while (++i < btree_level_count(root))
	{
		p = 0;
		items(root, i, &p, nodes);
		p = -1;
		while (nodes[++p])
		{
			is = is_firstnode(root, i, nodes[p], 0);
			applyf(nodes[p], i, is);
		}
	}
	free(nodes);
}
