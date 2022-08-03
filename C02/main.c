/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:25:33 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/03 21:48:42 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two.h"
#include <string.h>

int main(void)
{
	char	dest1[3] = "ab";
//	char	dest2[3] = "lo";
	char	src1[20] = "hello";
//	char	src2[20] = "hello";
//	dest2[2] = '\0';

	ft_strcpy(dest1, src1);
	printf("1:%s\n", dest1);
//	strcpy(dest2, src2);
//	printf("2:%s\n", dest2);
	return (0);
}
