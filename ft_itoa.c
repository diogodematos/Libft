/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:17:32 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/09 12:17:34 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_itoa(int n)
{
	int		len;
	long	teste;

	teste = n;
	len = 0;
	if (teste < 0)
	{
		len++;
		teste = -teste;
	}	
	if (teste == 0)
		len++;
	while (teste > 0)
	{
		len++;
		teste = teste / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	num = n;
	len = size_itoa(n);
	str = malloc (sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	if (n == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[len--] = num % 10 + 48;
		num = num / 10;
	}
	return (str);
}	

/*int		main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;
	int	f;

	a = 123456789;
	b = 1;
	c = 0;
	d = 0001342;
	e = -42;
	f = -2147483648;
	printf("%s", "a = ");
	printf("%d\n", a);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(a));
	printf("%s", "b = ");
	printf("%d\n", b);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(b));
	printf("%s", "c = ");
	printf("%d\n", c);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(c));
	printf("%s", "d = ");
	printf("%d\n", d);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(d));
	printf("%s", "e = ");
	printf("%d\n", e);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(e));
	printf("%s", "f = ");
	printf("%d\n", f);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(f));
	
	return(0);
}*/
