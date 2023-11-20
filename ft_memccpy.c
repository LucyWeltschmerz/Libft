/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larzuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 00:59:02 by larzuman          #+#    #+#             */
/*   Updated: 2021/02/02 17:04:19 by larzuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int ch, size_t length)
{
	unsigned char	*cdst;
	unsigned char	*csrc;
	unsigned		index;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	index = 0;
	while (index < length)
	{
		cdst[index] = csrc[index];
		if (csrc[index] == (unsigned char)ch)
			return (&dst[index] + 1);
		++index;
	}
	return (NULL);
}
