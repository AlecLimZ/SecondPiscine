/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:29:07 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/26 20:56:15 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (i);
	while (s[i])
		i++;
	return (i);
}

int		ft_atoi(char *str);
char	*ft_strchr(char *s, char c);
int		ft_verify(char *s);
int		ft_isnum(char c);

int	ft_verifybase_from(char *nbr, char *base_from)
{
	int	i;

	i = -1;
	while (nbr[++i])
	{
		if (ft_isnum(nbr[i]))
			if (!ft_strchr(base_from, nbr[i]))
				return (0);
	}
	return (1);
}

int	ft_powbase(int nbr, int base, int pow)
{
	int const	b = base;

	if (pow == 0)
		return (nbr);
	while (pow-- > 1)
		base *= b;
	return (nbr * base);
}

char	*ft_conv(int nb, char *base_to)
{
	char	*new;
	int		len;
	int		nbr;
	int		i;

	len = 0;
	nbr = nb;
	i = 0;
	while (nbr)
	{
		len++;
		nbr /= 10;
	}
	new = (char *)malloc(sizeof(char) * len + 1);
	while (nb > 0)
	{
		new[i++] = base_to[nb % 10];
		nb /= 10;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		ten;
	int		pow;

	if (!nbr || !base_from || !base_to
		|| !ft_verify(base_from) || !ft_verify(base_to)
		|| !ft_verifybase_from(nbr, base_from))
		return (NULL);
	nb = ft_atoi(nbr);
	pow = 0;
	ten = 0;
	while (nb > 0)
	{
		ten += ft_powbase(nb % 10, ft_strlen(base_from), pow++);
		nb /= 10;
	}
	nb = 0;
	while (ten)
	{
		nb = nb * 10 + ten % ft_strlen(base_to);
		ten /= ft_strlen(base_to);
	}
	return (ft_conv(nb, base_to));
}

int	main(void)
{
	char const	*fa = ft_convert_base("236", "0123456789", "abcdef");

	printf("fa: %s\n", fa);
}
