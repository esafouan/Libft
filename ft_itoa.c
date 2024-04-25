/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafouan <esafouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:29:56 by esafouan          #+#    #+#             */
/*   Updated: 2022/10/24 02:10:29 by esafouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	countlen(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	i;
	char		*dst;
	int			len;

	i = (long int)n;
	len = countlen(i);
	dst = (char *)malloc(len + 1);
	if (!dst)
		return (NULL);
	dst[len] = '\0';
	if (i == 0)
		dst[0] = '0';
	if (i < 0)
	{
		dst[0] = '-';
		i *= -1;
	}
	while (i > 0)
	{
		dst[len - 1] = i % 10 + 48;
		i = i / 10;
		len--;
	}
	return (dst);
}
