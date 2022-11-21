/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:40:56 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/04 17:53:20 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

/*int	main()
{
	printf("%c", ft_toupper(122));
	printf("%c", toupper(122));
	printf("%c", ft_toupper(43));
        printf("%c", toupper(43));
	printf("%c", ft_toupper(65));
        printf("%c", toupper(65));
	return (0);
}*/
