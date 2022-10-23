/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   co4.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:29:32 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/23 22:35:55 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CO4_H
# define CO4_H

# include <stdio.h>
# include <string.h>
# include <bsd/string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_putnbr_base(int nbr, char *base);
int		ft_atoi_base(char *str, char *base);
int		ft_atoi(char *str);
void	ft_putnbr_base(int nbr, char *base);

char	*ft_strchar(char *s, char c);
int		ft_verify(char *s);
#endif
