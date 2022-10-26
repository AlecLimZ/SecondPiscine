/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:27:56 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/26 16:35:56 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	*fa;

	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(*range) * (max - min));
	if (!range)
		return (NULL);
	fa = range;
	while (min < max)
		*range++ = min++;
	return (fa);
}

int	main(int ac, char **av)
{
	int	*test;

	if (ac <= 1)
		return (0);
	*test = ft_range(atoi(av[1]), atoi(av[2]));
	while (test && *test)
		printf("%d | ", *test++);
	printf("\n");
	return (0);
}
