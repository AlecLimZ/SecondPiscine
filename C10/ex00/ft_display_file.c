/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:36:59 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/30 15:46:10 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_error(int ac, char **av, int *fd)
{
	if (ac <= 1)
	{
		ft_putstr_fd(2, "File name missing\n");
		return (1);
	}
	if (ac != 2)
	{
		ft_putstr_fd(2, "Too many arguments\n");
		return (1);
	}
	*fd = open(av[1], O_RDWR | O_APPEND, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IROTH);
	if (*fd == -1)
	{
		ft_putstr_fd(2, "Cannot read file.\n");
		return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (ft_error(ac, av, &fd))
		return (1);
	ret = 1;
	printf("BUF_SIZE + 1: %d\n", BUF_SIZE + 1);
	while (ret)
	{
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putstr_fd(1, buf);
	}
	close(fd);
	return (0);
}
