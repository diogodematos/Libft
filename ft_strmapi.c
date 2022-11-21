/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:17:44 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/09 12:17:45 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		a;
	char	*str;

	a = 0;
	if (!s)
		return (0);
	str = malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (0);
	while (s[a])
	{
		str[a] = f(a, s[a]);
		a++;
	}
	str[a] = '\0';
	return (str);
}

/*char	uper(unsigned int a, char b)
{
	if (a == 0 || a > 0)
		b = b - 32;
	return (b);
}

int	main()
{
	char *tr = "hello";
	
	printf("%s\n", ft_strmapi(tr, uper));
	return (0);
}*/
