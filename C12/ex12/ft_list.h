/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:33:58 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/02 19:11:09 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

// utils.c
void	ft_putchar_fd(int fd, char c);
void	ft_putstr_fd(int fd, char *s);
int		ft_strlen(char *s);
char	*ft_strdup(char *s);
void	ft_printlist(t_list *l);

// utils2.c
int		ft_strcmp(char *s1, char *s2);

// free
void	ft_freelist(t_list *l);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
void	ft_freedata(void *data);

t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);
t_list	*ft_list_last(t_list *begin_list);
void	ft_list_push_back(t_list **begin_list, void *data);
t_list	*ft_list_push_strs(int size, char **strs);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);
void	ft_list_reverse(t_list **begin_list);
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));
void	ft_displaydata(void *data);
void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
			void *data_ref, int (*cmp)());
t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
			void (*free_fct)(void *));

#endif