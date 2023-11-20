/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larzuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 21:31:49 by larzuman          #+#    #+#             */
/*   Updated: 2021/02/05 21:46:31 by larzuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst1;

	if (lst)
	{
		while (*lst)
		{
			lst1 = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = lst1;
		}
	}
}
