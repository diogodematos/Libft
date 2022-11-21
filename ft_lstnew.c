/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:19:09 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/09 12:19:10 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;
	node->next = 0;
	return (node);
}

/*int	main(void)
{
	char	str[] = "Portugal Ole";
	t_list	*str2;
	printf("%s", "str = ");
	printf("%s\n", str);
	str2 = ft_lstnew((void *)str);
	printf("%s", "ft_lstnew((void *)str) = ");
	printf("%s\n", (char *)str2->content);
	return (0);
}*/
