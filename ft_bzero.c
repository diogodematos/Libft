/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:31:37 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/03 14:53:44 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	unsigned char	*str;
	size_t			a;

	a = 0;
	str = (unsigned char *)dest;
	while (a < n)
	{
		str[a] = '\0';
		a++;
	}
}

/*int main()
{
	char str[50];

	strcpy(str, "jhhg");
	puts(str);
	bzero(str, 2);
	printf("String after first |%d| bytes changes to 0 is - |%s|\n", 2, str);
	ft_bzero(str, 2);
	printf("String after first |%d| bytes changes to 0 is - |%s|\n", 2, str);
	return (0);
}	*/
