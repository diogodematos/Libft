/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:25:29 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/07 13:29:12 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t		a;

	a = 0;
	while (a < n && str1[a])
	{
		if (str1[a] != str2[a])
			return ((unsigned char)str1[a] - (unsigned char)str2[a]);
		a++;
	}
	if (a >= n)
		return (0);
	return ((unsigned char)str1[a] - (unsigned char)str2[a]);
}

/*int	main()
{
	printf ("%d\n", ft_strncmp("amanha","aMANHA",3));
	printf ("%d\n", strncmp("amanha","aMANHA",3));
	printf ("%d\n", ft_strncmp("amanha","amanha",3));
        printf ("%d\n", strncmp("amanha","amanha",3));
	printf ("%d\n", ft_strncmp("Aamanha","aAmanha",3));
	printf ("%d\n", strncmp("Aamanha","aAmanha",3));
        printf ("%d\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
        printf ("%d\n", strncmp("abcdefgh", "abcdwxyz", 4));
        printf ("%d\n", ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
        printf ("%d\n", strncmp("zyxbcdefgh", "abcdwxyz", 0));
        return (0);
}*/
