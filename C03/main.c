/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:31:41 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/23 15:04:13 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "co3.h"
#include <bsd/string.h>

void	ft_init(char *s1a, char *bbb)
{
	s1a[0] = 'h';
	s1a[1] = 'e';
	s1a[2] = 'l';
	s1a[3] = 'l';
	s1a[4] = 'o';
	s1a[5] = '\0';
	bbb[0] = '7';
	bbb[1] = '7';
	bbb[2] = '7';
	bbb[3] = '\0';
}

int main(void)
{
	char	s1a[100] = "hello";
	char	bbb[100] = "hello";
//	char	*s1a = malloc(sizeof(char) * 9);
//	char	*bbb = malloc(sizeof(char) * 7);
//	ft_init(s1a, bbb);
	char	s2[5] = "eeee";
	printf("ft_strlcat: %d\n", ft_strlcat(s1a, s2, 8));
	printf("s1a: %s\n", s1a);
	printf("strlcat: %ld\n", strlcat(bbb, s2, 8));
	printf("bbb: %s\n", bbb);
//	printf("strcat: %s\n", strcat(s1b, s2));
}
