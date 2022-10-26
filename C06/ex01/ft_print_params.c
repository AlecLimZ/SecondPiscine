/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:01:07 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/26 15:12:35 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

int	main(int ac, char **av)
{
	if (ac <= 1)
		return (0);
	while (*++av)
	{
		ft_putstr(*av);
		ft_putstr("\n");
	}
	return (0);
}
