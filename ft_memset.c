/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larzuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 22:09:08 by larzuman          #+#    #+#             */
/*   Updated: 2021/02/02 15:01:39 by larzuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int ch, size_t length)
{
	size_t index;

	index = 0;
	while (index < length)
	{
		*((unsigned char *)str + index) = ch;
		++index;
	}
	return (str);
}
