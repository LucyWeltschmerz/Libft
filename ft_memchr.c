/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larzuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 05:23:33 by larzuman          #+#    #+#             */
/*   Updated: 2021/02/07 17:59:21 by larzuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned	int					i;
	unsigned	char				ch;
	const		unsigned	char	*src;

	ch = (unsigned char)c;
	src = s;
	i = 0;
	while (i < n)
	{
		if (src[i] == ch)
		{
			return (void*)(src + i);
		}
		i++;
	}
	return (0);
}
