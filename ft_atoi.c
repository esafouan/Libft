/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafouan <esafouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 05:13:29 by esafouan          #+#    #+#             */
/*   Updated: 2022/10/24 01:31:36 by esafouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	sign;

	sign = 1;
	i = 0;
	j = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str && str[i] && str[i] <= '9' && str[i] >= '0')
	{
		j = j * 10 + str[i] - 48;
		i++;
	}
	return (j * sign);
}
