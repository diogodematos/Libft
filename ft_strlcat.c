/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:56:10 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/04 17:02:42 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;
	size_t	j;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	j = dlen;
	if (dlen >= size)
		return (size + slen);
	while (i < size - 1 - dlen && src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (slen + dlen);
}

/*int	main(void)
{
	printf ("%zu, %s\n", ft_strlcat("aman", "ha", 5), "amanha");
	//printf ("%zu, %s", strlcat("aman", "ha", 5), "amanha");
	return (0);
}*/
