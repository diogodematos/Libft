/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:30:13 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/10/19 17:49:46 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *str, int a, size_t n)
{
	unsigned char	*pt;
	size_t			b;

	pt = (unsigned char *)str;
	b = 0;
	while (b < n)
	{
		if (pt[b] == (unsigned char)a)
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
