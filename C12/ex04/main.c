/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:39:28 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/02 13:37:13 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

char	**strings(int ac, char **av)
{
	char	**new;
	int		i;

	new = (char **)malloc(sizeof(char *) * ac);
	if (!new)
		return (NULL);
	i = -1;
	while (av[++i])
		new[i] = ft_strdup(av[i]);
	new[i] = NULL;
	return (new);
}

void	ft_last(t_list *l, char **ss)
{
	t_list	*last;

	ft_printlist(l);
	last = ft_list_last(l);
	printf("last data: %s\n", last->data);
	ft_freelist(l);
	free(ss);
}

int	main(int ac, char **av)
{
	t_list	*l;
	int		i;
	char	**ss;

	l = NULL;
	i = -1;
	if (ac <= 1)
		return (1);
	ss = strings(ac, av + 1);
	while (ss[++i] && i < ac - 2)
		ft_list_push_front(&l, ss[i]);
	ft_list_push_back(&l, ss[i]);
	ft_last(l, ss);
	return (0);
}
