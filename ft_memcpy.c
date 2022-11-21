/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:01:01 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/03 15:13:12 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*t;
	size_t			a;

	if (!dest && !src)
		return (0);
	a = 0;
	p = (unsigned char *)src;
	t = (unsigned char *)dest;
	while (a < n)
	{
		t[a] = p[a];
		a++;
	}
	return (dest);
}

/*int	main()
{
	char str[50] = "amanha";
	char dest[50] = "";

	memcpy(dest, str, 2);
	puts(dest);
	ft_memcpy(dest, str, 2);
	puts(dest);
	return (0);
}
*/
