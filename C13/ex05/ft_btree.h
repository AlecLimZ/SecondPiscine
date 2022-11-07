/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:17:53 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/07 16:20:27 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}	t_btree;

// utils.c
int		ft_strlen(char *s);
void	ft_putstr_fd(int fd, char *s);
void	printitem(void *item);
int		ft_strchr(char *s, char c);
int		ft_strcmp(void *s1, void *s2);

// utils2.c
int		ft_isnbr(char c);
int		ft_isspace(char c);
int		ft_atoi(char *s);
int		ft_strcmpatoi(void *s1, void *s2);

t_btree	*btree_create_node(void *item);
void	btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void	btree_apply_infix(t_btree *root, void (*applyf)(void *));
void	btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void	btree_insert_data(t_btree **root, void *item,
			int (*cmpf)(void *, void *));
void	*btree_search_item(t_btree *root, void *data_ref,
			int (*cmpf)(void *, void *));
int		ft_totalnodes(t_btree *root);
int		btree_level_count(t_btree *root);

#endif
