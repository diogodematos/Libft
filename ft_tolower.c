/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:53:46 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/04 17:57:50 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

/*int	main()
{
	printf("%c", ft_tolower(122));
	printf("%c", tolower(122));
	printf("%c", ft_tolower(43));
        printf("%c", tolower(43));
	printf("%c", ft_tolower(65));
        printf("%c", tolower(65));
	return (0);
}*/
