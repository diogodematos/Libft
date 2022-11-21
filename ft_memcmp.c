/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:55:05 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/07 15:11:58 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*pt;
	unsigned char	*def;
	size_t			a;

	pt = (unsigned char *)str1;
	def = (unsigned char *)str2;
	a = 0;
	while (a < n)
	{
		if (pt[a] > def[a])
			return (1);
		else if (pt[a] < def[a])
			return (-1);
		a++;
	}
	return (0);
}

/*int	main()
{
	printf ("%d\n", ft_memcmp("Azanha","aZaNHA",3));
	printf ("%d\n", memcmp("Azanha","aZaNHA",3));
	printf ("%d\n", ft_memcmp("amanha","amanha",3));
        printf ("%d\n", memcmp("amanha","amanha",3));
	printf ("%d\n", ft_memcmp("Aamanha","aAmanha",3));
        printf ("%d\n", memcmp("Aamanha","aAmanha",3));
	return (0);
}*/
