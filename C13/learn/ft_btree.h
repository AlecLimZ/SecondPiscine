/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:14:45 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/03 14:22:29 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// in-depth traversal, using DFS
// breath-first traversal, using BFS
// dichotomy?
// tree balance is called as red-black tree
typedef struct s_btree
{
	struct s_btree	*parent;
	struct s_btree	*right;
	struct s_btree	*left;
	void			*data;
}
