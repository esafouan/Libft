/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafouan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 04:19:32 by esafouan          #+#    #+#             */
/*   Updated: 2022/10/19 22:26:14 by esafouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s1, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	if (!s1)
		return (NULL);
	if (start >= ft_strlen(s1))
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s1))
		len = ft_strlen(s1);
	i = 0;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	while (s1[start] && i < len && start < ft_strlen(s1))
	{
		dst[i] = s1[start];
		i++;
		start++;
	}
	dst[i] = '\0';
	return (dst);
}
