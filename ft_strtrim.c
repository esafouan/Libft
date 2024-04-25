/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafouan <esafouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:27:10 by esafouan          #+#    #+#             */
/*   Updated: 2022/10/24 02:21:00 by esafouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	lens1;
	size_t	i;

	i = 0;
	lens1 = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (lens1 > i && ft_strchr(set, s1[lens1]))
		lens1--;
	return (ft_substr(s1, i, lens1 - i + 1));
}
