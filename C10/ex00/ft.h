/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:37:20 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/30 15:50:35 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BUF_SIZE	300000

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

int		ft_strlen(char *s);
void	ft_putstr_fd(int fd, char *s);

#endif
