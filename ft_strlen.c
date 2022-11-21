/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:42:17 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/03 12:25:57 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

/*int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("%ld\n", ft_strlen(av[1]));
		printf("%ld\n", strlen(av[1]));
		printf("%ld\n", ft_strlen(av[2]));
		printf("%ld\n", strlen(av[2]));
		printf("%ld\n", ft_strlen(av[3]));
		printf("%ld\n", strlen(av[3]));
	}
	return (0);
}*/
