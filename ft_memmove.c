/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafouan <esafouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:48:20 by esafouan          #+#    #+#             */
/*   Updated: 2022/10/24 02:12:42 by esafouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*desti;
	char	*srci;
	size_t	i;

	i = 0;
	desti = (char *)dest;
	srci = (char *)src;
	if (!desti && !srci)
		return (NULL);
	if (srci < desti)
	{
		while (0 < len)
		{
			desti[len - 1] = srci[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(desti, srci, len);
	return (desti);
}
