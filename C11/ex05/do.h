/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:53:44 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/01 21:19:49 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_H
# define DO_H

# include <stdio.h>
# include <unistd.h>

//op.c
int		ft_plus(int x, int y);
int		ft_mutli(int x, int y);
int		ft_minus(int x, int y);
int		ft_division(int x, int y);
int		ft_modulo(int x, int y);

//ft_atoi.c
long	ft_atoi(char *s);
int		ft_strlen(char *s);
int		ft_isop(char *s);

//ft_putnbr.c
void	ft_putnbr(int nb);
#endif
