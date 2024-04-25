/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafouan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:00:11 by esafouan          #+#    #+#             */
/*   Updated: 2022/10/19 22:37:13 by esafouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	p = (char *)s;
	i = 0;
	if (p[i] != (char)c)
		i++;
	while (i < ft_strlen(s) + 1)
	{
		if (p[i] == (char)c)
			return (p + i);
		else
			i++;
	}
	return (NULL);
}
