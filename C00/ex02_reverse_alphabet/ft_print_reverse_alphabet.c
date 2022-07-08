/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:42:38 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/06 14:00:59 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = '{';
	while (--z >= 'a')
		write(1, &z, 1);
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
