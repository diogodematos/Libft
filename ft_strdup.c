/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:53:18 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/08 12:03:02 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char			*dest;
	unsigned int	a;

	dest = malloc(ft_strlen(src) * sizeof (char) + 1);
	if (!dest)
		return (0);
	a = 0;
	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/*int	main(void)
{
	char source[] = "boralamarina";

	printf("%s", ft_strdup(source));
	return (0);
}*/
