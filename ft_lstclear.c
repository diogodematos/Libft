/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:20:14 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/12/16 12:12:57 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*arem;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		arem = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = arem;
	}
	*lst = NULL;
}
