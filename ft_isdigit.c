/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:17:30 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/03 12:03:38 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
	if (a < 48 || a > 57)
		return (0);
	return (1);
}

/*int	main()
{
	printf("%d\n", ft_isdigit('h'));
	printf("%d\n", ft_isdigit('8'));
	printf("%d\n", ft_isdigit('+'));
	return (0);
}*/
