/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_param.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:13:22 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/26 15:35:44 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

int	ft_strcmp(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	if (!s1[i] && !s2[i])
		return (0);
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	char const	*first = av[0];

	if (ac <= 1)
		return (0);
	while (*av)
		av++;
	while (*--av && ft_strcmp(*av, first))
	{
		ft_putstr(*av);
		ft_putstr("\n");
	}
	return (0);
}
