/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafouan <esafouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 05:38:01 by esafouan          #+#    #+#             */
/*   Updated: 2022/10/23 18:50:07 by esafouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;

	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (dst[i] != src[i])
			return (dst[i] - src[i]);
		i++;
	}
	return (0);
}
