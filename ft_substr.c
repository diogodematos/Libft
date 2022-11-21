/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:04:25 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/08 14:09:09 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	a;

	if (!s)
		return (0);
	dest = malloc (len * sizeof (char) + 1);
	if (!dest)
		return (0);
	a = 0;
	if (ft_strlen(s) >= start)
	{	
		while (s[start] && a != len)
		{
			dest[a] = s[start];
			a++;
			start++;
		}
	}
	dest[a] = '\0';
	return (dest);
}

/*int	main(void)
{
	char source[] = "bora";

	printf("%s", ft_substr(source, 5, 2));
	return (0);
}*/
