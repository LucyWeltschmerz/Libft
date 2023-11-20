/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larzuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 19:08:53 by larzuman          #+#    #+#             */
/*   Updated: 2021/02/03 20:16:00 by larzuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		word_count(char const *s, char c)
{
	int	idx;
	int	count;

	idx = 0;
	count = 0;
	while (s[idx])
	{
		if (s[idx] != c && (s[idx + 1] == c || s[idx + 1] == '\0'))
			count++;
		idx++;
	}
	return (count);
}

static	int		word_len(char	const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static	char	**matrix(char const *s, char c, char **result, int w_count)
{
	int	i;
	int	j;
	int	w_len;

	while (*s == c)
		s++;
	i = -1;
	while (++i < w_count)
	{
		while (*s == c)
			s++;
		j = 0;
		w_len = word_len(s, c);
		if (!(result[i] = (char *)malloc(sizeof(char) * (w_len + 1))))
			return (NULL);
		while (j < w_len)
		{
			result[i][j] = *s;
			s++;
			j++;
		}
		result[i][j] = '\0';
	}
	result[i] = NULL;
	return (result);
}

char			**ft_split(char	const *s, char c)
{
	char	**result;
	int		wcount;

	if (!s)
		return (NULL);
	wcount = word_count(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (wcount + 1))))
		return (NULL);
	result = matrix(s, c, result, wcount);
	return (result);
}
