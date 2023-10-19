/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:55:45 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/10/19 16:04:01 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int b)
{
	int	a;

	a = -1;
	while (b > 255)
		b = b - 256;
	while (str[++a])
	{
		if (str[a] == b)
			return ((char *)&str[a]);
	}
	if (str[a] == b)
		return ((char *)&str[a]);
	return (0);
}

// int	main()
// {
// 	// printf("%s\n", ft_strchr("teste",'e' + 256));
// 	//printf("%s\n", strchr("teste",'e' + 255));
// 	// printf("%s\n", ft_strchr("teste",'\0'));
// 	// printf("%s\n", strchr("teste",'\0'));
// 	// // printf("%s\n", ft_strchr("",'f'));
// 	// // printf("%s\n", strchr("",'f'));
// 	// printf("%s\n", ft_strchr("sgf+ghv",43));
//   // printf("%s\n", strchr("sgf+ghv",43));
// 	// printf("%s\n", ft_strchr("Aamanha",65));
//   // printf("%s\n", strchr("Aamanha",65));
// 	printf("%d\n", 'e' + 256);
// 	return (0);
// }
