/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:38:19 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/03 12:17:46 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int a)
{
	if (a < 32 || a > 126)
		return (0);
	return (1);
}

/*int	main()
{
	printf("%d\n", ft_isprint('u'));
	printf("%d\n", ft_isprint(0x09));
	printf("%d\n", ft_isprint(' '));
	return (0);
}*/
