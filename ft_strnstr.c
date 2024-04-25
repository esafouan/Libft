/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafouan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:02:30 by esafouan          #+#    #+#             */
/*   Updated: 2022/10/19 22:46:15 by esafouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	a;

	a = 0;
	if (haystack == needle)
		return ((char *)haystack);
	if (!*needle && !len)
		return ((char *)haystack);
	if (!needle)
		return ((char *)haystack);
	while (haystack[a] && a < len)
	{
		i = 0;
		while (needle[i] && needle[i] == haystack[i + a] && i + a < len)
			i++;
		if (i == ft_strlen(needle))
			return (((char *)haystack) + a);
		a++;
	}
	return (NULL);
}
