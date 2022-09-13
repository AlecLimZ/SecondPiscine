/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:12:24 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/13 21:43:25 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TWO_H
# define TWO_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			ft_putstr_non_printable(char *str);
void			*ft_print_memory(void *addr, unsigned int size);
int				ft_strlen(char *s);
int				ft_isuppercase(char c);
int				ft_islowercase(char c);

void    ft_hex2(unsigned char *addr, unsigned int size, char *hex);
#endif
