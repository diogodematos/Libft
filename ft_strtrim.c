/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:42:05 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/08 16:50:27 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*dest;
	unsigned int	start;
	unsigned int	end;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while ((s1[end] != s1[start]) && ft_strchr(set, s1[end]))
		end--;
	dest = ft_substr(s1, start, (end - start) + 1);
	if (!dest)
		return (0);
	return (dest);
}

/*int	main(void)
{
	printf("%s", ft_strtrim("abcabialovesabcaa", "abc"));
	return (0);
}*/
