/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:39:28 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/02 12:14:30 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(void)
{
	t_list	*l;
	char	*s;

	s = ft_strdup("hello\n");
	l = ft_create_elem(s);
	ft_printlist(l);
	ft_freelist(l);
	free(l);
	return (0);
}
