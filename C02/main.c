/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:25:33 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/05 20:23:36 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two.h"
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 1)
		return (0);
	(void)av;
	printf("%s\n", "Coucou\ntu vas bien ?");
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return (0);
}
