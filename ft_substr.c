/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larzuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 18:56:22 by larzuman          #+#    #+#             */
/*   Updated: 2021/02/02 16:59:15 by larzuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*subs;

	i = 0;
	if (!s || !(subs = (char *)malloc(len + 1)))
		return (NULL);
	while (i < len && start < ft_strlen(s) + 1 && s[start + i])
	{
		subs[i] = s[start + i];
		++i;
	}
	subs[i] = '\0';
	return (subs);
}
