/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:48:35 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/26 17:04:39 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*assign;
	int	len;

	assign = *range;
	if (!assign)
		return (-1);
	if (min >= max)
	{
		assign = NULL;
		return (0);
	}
	len = max - min;
	while (min < max)
		*assign++ = min++;
	return (len);
}

int	main(void)
{
	int	*box;
	int	len;
	int	i;

	i = 0;
	box = (int *)malloc(sizeof(int) * 7);
	len = ft_ultimate_range(&box, 1, 8);
	printf("len: %d\n", len);
	while (i < len)
		printf("%d\n", box[i++]);
	return (0);
}
