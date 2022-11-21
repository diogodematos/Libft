/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:28:54 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/08 14:36:24 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*dest;
	unsigned int	a;
	unsigned int	b;

	if (!s1 || !s2)
		return (0);
	dest = malloc ((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!dest)
		return (0);
	a = 0;
	while (s1[a])
	{
		dest[a] = s1[a];
		a++;
	}
	b = 0;
	while (s2[b])
	{
		dest[a] = s2[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

/*int	main()
{
	printf("%s", ft_strjoin("borala", "marina"));
	return (0);
}*/
