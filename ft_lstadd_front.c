/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:19:21 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/09 12:19:24 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*void	ft_putstr(char *s)
{
	int	i;
	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}
void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->content);
		list = list->next;
	}
}
int	main(void)
{
	t_list	*list;
	t_list	*str0;
	t_list	*str1;
	t_list	*new;
	list = ft_lstnew("Tobias / ");
	str0 = ft_lstnew("Ernesto / ");
	str1 = ft_lstnew("Juliao.");
	new = ft_lstnew("Boas, adicionaram-me nesta Lista! / ");
	list->next = str0;
	str0->next = str1;
	printf("%s\n", "Lista: ");
	print_list(list);
	printf("\n\n");
	ft_lstadd_front(&list, new);
	printf("%s\n", "ft_lstadd_front: ");
	print_list(list);
	return(0);
}*/
