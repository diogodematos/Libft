/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:30:13 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/07 14:53:45 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *str, int a, size_t n)
{
	char	*pt;
	size_t	b;

	pt = (char *)str;
	b = 0;
	while (b < n)
	{
		if (pt[b] == a)
			return ((void *)str + b);
		b++;
	}
	return (0);
}

/*int main ()
{
   const char ch = '.';
   char *ret;
   char *gt;

   ret = memchr("vamos.lorear", ch, strlen("vamos.lorear));

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   gt = ft_memchr("vamos.lorear", ch, strlen("vamos.lorear"));

   printf("String after |%c| is - |%s|\n", ch, gt);

   return(0);
}*/
