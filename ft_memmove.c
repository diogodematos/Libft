/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:18:08 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/03 15:45:52 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*t;
	size_t			a;

	if (!dest && !src)
		return (0);
	a = 0;
	p = (unsigned char *)src;
	t = (unsigned char *)dest;
	if (t > p)
	{
		while (n-- > 0)
			t[n] = p[n];
	}
	else
	{
		while (a < n)
		{
			t[a] = p[a];
			a++;
		}
	}
	return (dest);
}

/*int	main()
{
	char str[] = "amanha";
	char dest[] = "frio";

	memmove(dest, str, 2);
	puts(dest);
	ft_memmove(dest, str, 2);
	puts(dest);
	return (0);
}*/
