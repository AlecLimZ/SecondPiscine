/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:09:34 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/25 21:19:12 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define LEN 42

#include "co6.h"

int main(void)
{
	int	i;
	char	*str;

	str = (char*)malloc(sizeof(*str) * (LEN + 1));
	i = 0;
	while (i < LEN)
	{
		str[i] = '0' + (i % 10);
		i++;
	}
	str[i] = '\0';
	free(str);
	while (1)
		;
	return (0);
}
