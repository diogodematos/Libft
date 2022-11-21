/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:27:16 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/03 12:10:30 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
	if (a < 0 || a > 127)
		return (0);
	return (1);
}

/*int	main()
{
	printf("%d\n", ft_isascii('5'));
	printf("%d\n", ft_isascii('+'));
	printf("%d\n", ft_isascii('?'));
	printf("%d\n", ft_isascii(0x80));
	return (0);
}*/
