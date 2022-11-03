/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb_tree.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:22:57 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/03 14:24:09 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

enum e_rb_color
{
	RB_BLACK,
	RB_RED
};

typedef struct	s_rb_node
{
	struct s_rb_node	*parent;
	struct s_rb_node	*right;
	struct s_rb_node	*left;
	void				*data;
	enum e_rb_color		color;
}	t_rb_node;
