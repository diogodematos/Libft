/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:55:45 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/07 10:52:28 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int b)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] == b)
			return ((char *)&str[a]);
		a++;
	}
	if (str[a] == b)
		return ((char *)&str[a]);
	return (0);
}

/*int	main()
{
	printf("%s\n", ft_strchr("f",'\0'));
	printf("%s\n", strchr("f",'\0'));
	printf("%s\n", ft_strchr("",'f'));
	printf("%s\n", strchr("",'f'));
	printf("%s\n", ft_strchr("sgf+ghv",43));
        printf("%s\n", strchr("sgf+ghv",43));
	printf("%s\n", ft_strchr("Aamanha",65));
        printf("%s\n", strchr("Aamanha",65));
	return (0);
}*/
