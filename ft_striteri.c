/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:17:57 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/09 12:17:58 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	a;

	a = 0;
	if (!s || !f)
		return ;
	while (s[a])
	{
		f(a, &s[a]);
		a++;
	}
}

/*void my_func(unsigned int i, char *c)
{
	printf("%d\n", i);
	if (ft_isalpha(*c))
	{
		*c = ft_toupper(*c);
	}
}
int main()
{
	char str[] = "hello.";
	puts(str);
	ft_striteri(str, my_func);
	puts(str);
	return (0);
}*/
