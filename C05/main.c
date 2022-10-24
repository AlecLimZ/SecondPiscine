/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:17:41 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/24 21:47:49 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "co5.h"

int main(void)
{
	printf("%d\n", ft_iterative_factorial(10));
	printf("%d\n", ft_recursive_factorial(10));
	printf("%d\n", ft_iterative_power(2,3));
	printf("%d\n", ft_recursive_power(2,3));
	printf("%d\n", ft_fibonacci(5));
	printf("%f\n", sqrt(3));
	printf("%d\n", ft_sqrt(3));
	printf("%d\n", ft_is_prime(33));
	printf("%d\n", ft_find_next_prime(7));
	return (0);
}
