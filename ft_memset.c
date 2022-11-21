/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:45:40 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/03 12:30:16 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int b, size_t n)
{
	unsigned char	*p;
	size_t			a;

	a = 0;
	p = (unsigned char *)str;
	while (a < n)
	{
		p[a] = (unsigned char)b;
		a++;
	}
	return (str);
}

/*int main () 
{
   char str[50];

   strcpy(str,"bora la jovens");
   puts(str);

   memset(str,'?',7);
   puts(str);
   
   ft_memset(str,'?',7);
   puts(str);
   return (0);
}	*/
