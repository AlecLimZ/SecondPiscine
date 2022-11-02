/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:39:28 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/02 13:00:01 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(void)
{
	t_list	*l;
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = ft_strdup("hello1\n");
	s2 = ft_strdup("hello2\n");
	s3 = ft_strdup("hello3\n");
	l = NULL;
	ft_list_push_front(&l, s1);
	ft_list_push_front(&l, s2);
	ft_list_push_front(&l, s3);
	ft_printlist(l);
	ft_freelist(l);
	return (0);
}
