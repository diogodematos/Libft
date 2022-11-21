/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:19:51 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/09 12:19:52 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*fim;

	fim = ft_lstlast(*lst);
	if (!*lst)
		*lst = new;
	else
	{	
		fim->next = new;
		new->next = NULL;
	}
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
	list = ft_lstnew("Hoje");
	str0 = ft_lstnew(" vamos");
	str1 = ft_lstnew(" comer");
	new = ft_lstnew(" salada");
	list->next = str0;
	str0->next = str1;
	list->next = str0;
	str0->next = str1;
	printf("%s\n", "Lista: ");
	print_list(list);
	printf("\n\n");
	ft_lstadd_back(&list, new);
	printf("%s\n", "ft_lstadd_back: ");
	print_list(list);
	return(0);
} */
