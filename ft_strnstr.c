/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:22:29 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/07 16:28:10 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (to_find[a] == '\0')
		return ((char *)str);
	if (n == 0)
		return (0);
	while (str[a] != '\0' && a < n)
	{
		if (str[a] == to_find[b])
		{
			while (str[a] == to_find[b] && to_find[b] != '\0')
			{
				a++;
				b++;
			}
			if ((str[a] != to_find[b] && to_find[b] != '\0') || a > n)
				return (0);
			return ((char *)str + (a - b));
		}
		a++;
	}
	return (0);
}

/*int    main(void)
{
    char    ki[] = "amanha de manha";
    char    str[] = "ha";

    printf("minha funcao:%s\n", ft_strnstr(ki, str, 6));
    printf ("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
    printf ("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "", 0));
    printf ("%s\n", ft_strnstr(NULL, "fsf", 0));
}*/
