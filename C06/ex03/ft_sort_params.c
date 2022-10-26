/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:38:31 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/26 15:51:14 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

void	ft_bubble(char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = -1;
	while (av[++i])
	{
		j = i;
		while (av[++j])
		{
			if (av[i][0] > av[j][0])
			{
				tmp = av[i];
				av[i] = av[j];
				av[j] = tmp;
			}
		}
	}
}

int	main(int ac, char **av)
{
	if (ac <= 1)
		return (0);
	ft_bubble(av + 1);
	while (*++av)
	{
		ft_putstr(*av);
		ft_putstr("\n");
	}
	return (0);
}
