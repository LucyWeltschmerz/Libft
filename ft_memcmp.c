/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larzuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 06:02:16 by larzuman          #+#    #+#             */
/*   Updated: 2021/02/01 20:39:04 by larzuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t length)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			index;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	index = 0;
	while (index < length)
	{
		if (s1[index] == s2[index])
			++index;
		else
			return (s1[index] - s2[index]);
	}
	return (0);
}
