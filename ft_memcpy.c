/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafouan <esafouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 04:07:33 by esafouan          #+#    #+#             */
/*   Updated: 2022/10/24 02:11:58 by esafouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dsti;
	char	*srci;
	size_t	i;

	i = 0;
	dsti = (char *)dst;
	srci = (char *)src;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		dsti[i] = srci[i];
		i++;
	}
	return (dst);
}
