/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafouan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:02:13 by esafouan          #+#    #+#             */
/*   Updated: 2022/10/22 21:52:58 by esafouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*g;

	i = 0;
	p = (unsigned char *)s1;
	g = (unsigned char *)s2;
	if (!n)
		return (0);
	while (p[i] && g[i] && i < n - 1 && p[i] == g[i])
		i++;
	return (p[i] - g[i]);
}
