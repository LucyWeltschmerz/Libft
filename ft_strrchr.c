/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larzuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:16:45 by larzuman          #+#    #+#             */
/*   Updated: 2021/02/02 16:46:23 by larzuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t	len;

	len = ft_strlen(str);
	if ((char)ch == '\0')
		return ((char *)str + len);
	while (len--)
		if (*(str + len) == ch)
			return ((char *)(str + len));
	return (NULL);
}
