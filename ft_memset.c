/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafouan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:59:47 by esafouan          #+#    #+#             */
/*   Updated: 2022/10/17 05:45:01 by esafouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset( void *dest, int a, size_t count )
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)dest;
	while (i < count)
	{
		str[i] = a;
		i++;
	}
	return (str);
}
