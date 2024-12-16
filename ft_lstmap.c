/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:20:32 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/12/16 14:06:50 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*nnode;
	void	*tmp;

	if (!lst || !f || !del)
		return (0);
	new = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		nnode = ft_lstnew(tmp);
		if (!nnode)
		{
			del(tmp);
			ft_lstclear(&new, del);
			return (0);
		}
		lst = lst->next;
		ft_lstadd_back(&new, nnode);
	}
	return (new);
}
