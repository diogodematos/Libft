/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:20:32 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/09 12:20:33 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*nnode;

	if (!lst || !f || !del)
		return (0);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (0);
	lst = lst->next;
	while (lst)
	{
		nnode = ft_lstnew(f(lst->content));
		if (!nnode)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		lst = lst->next;
		ft_lstadd_back(&new, nnode);
	}
	return (new);
}
