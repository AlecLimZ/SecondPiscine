/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:25:33 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/12 17:34:19 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two.h"
#include <string.h>

int ft_fun(char *s)
{
	int	i;

	i = 0;
	while (*s)
		i += *s++;
	return (i);
}

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;

	char *test = "bonjour";
	ft_print_memory(&test, ft_strlen(test));
	return (0);
}
