/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larzuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 21:19:24 by larzuman          #+#    #+#             */
/*   Updated: 2021/02/06 16:24:49 by larzuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst1;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			lst1 = ft_lstlast(*(lst));
			lst1->next = new;
		}
	}
}
