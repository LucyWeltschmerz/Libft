/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larzuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 19:46:24 by larzuman          #+#    #+#             */
/*   Updated: 2021/02/01 19:55:46 by larzuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int indx;
	int sign;
	int result;

	indx = 0;
	sign = 1;
	result = 0;
	while (str[indx] == ' ' || str[indx] == '\n' || str[indx] == '\t' ||
			str[indx] == '\v' || str[indx] == '\f' || str[indx] == '\r')
		indx++;
	if (str[indx] == '-' || str[indx] == '+')
	{
		if (str[indx] == '-')
			sign = -1;
		indx++;
	}
	while (str[indx] >= '0' && str[indx] <= '9')
	{
		result = (result * 10) + (str[indx] - '0');
		indx++;
	}
	return (result * sign);
}
