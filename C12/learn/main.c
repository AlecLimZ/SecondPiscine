/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:14:02 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/02 11:20:45 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int main(void)
{
	t_list	*list;

	list = NULL;
	list = add_link(list, "toto\n");
	list = add_link(list, "tata\n");
	list = add_link(list, "tutu\n");
	print_list(list);
	return (0);
}
