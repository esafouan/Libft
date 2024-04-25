/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafouan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:00:56 by esafouan          #+#    #+#             */
/*   Updated: 2022/10/22 21:42:05 by esafouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	a;
	size_t	size_src;
	size_t	size_dest;

	a = ft_strlen(dest);
	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	i = 0;
	if (!dest)
		return (size_src);
	if (size_dest >= size)
		return (ft_strlen(src) + size);
	while (src[i] && a < size - 1)
	{
		dest[a] = ((char *)src)[i];
		i++;
		a++;
	}
	dest[a] = '\0';
	return (size_dest + size_src);
}
