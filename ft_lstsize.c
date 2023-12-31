/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larzuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:32:53 by larzuman          #+#    #+#             */
/*   Updated: 2021/02/05 19:39:37 by larzuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*lst1;

	lst1 = lst;
	i = 0;
	while (lst1)
	{
		lst1 = lst1->next;
		i++;
	}
	return (i);
}
