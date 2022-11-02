/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:33:58 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/02 12:08:45 by leng-chu         ###   ########.fr       */
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

t_list	*ft_create_elem(void *data);

// utils.c
void	ft_putchar_fd(int fd, char c);
void	ft_putstr_fd(int fd, char *s);
int		ft_strlen(char *s);
char	*ft_strdup(char *s);
void	ft_printlist(t_list *l);

// free.c
void	ft_freelist(t_list *l);

#endif
