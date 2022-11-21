/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:59:02 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/03 12:04:02 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a < 65 || a > 90) && (a < 97 || a > 122))
		return (0);
	return (1);
}

/*int	main()
{
	printf("%d\n", ft_isalpha('f'));
	printf("%d\n", ft_isalpha('5'));
	printf("%d\n", ft_isalpha('L'));
	return(0);
}*/
