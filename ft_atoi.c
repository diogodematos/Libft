/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:29:01 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/07 17:02:15 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	c = 1;
	while (str[a] != '\0')
	{
		while ((str[a] == 32) || (str[a] > 8 && str[a] < 14))
			a++;
		if (str[a] == 45 || str[a] == 43)
		{
			if (str[a] == 45)
				c = -c;
			a++;
		}
		while (str[a] > 47 && str[a] < 58)
			b = b * 10 + str[a++] - 48;
		return (b * c);
	}
	return (0);
}

/*int main(void)
{
  printf("%d\n", ft_atoi("       +-5738657"));
  printf("%d\n", atoi("       +-5738657"));
  printf("%d\n", ft_atoi("       57fgg38657"));
  printf("%d\n", atoi("       57fgg38657"));
  printf("%d\n", ft_atoi("       -5738657"));
  printf("%d\n", atoi("       -5738657"));
}*/
