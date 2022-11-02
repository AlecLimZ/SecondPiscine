/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:12:38 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/02 11:21:10 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list	t_list;

struct s_list
{
	char	*str;
	t_list	*next;
};

t_list	*add_link(t_list *list, char *str);
void	print_list(t_list *list);

#endif
