/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:18:36 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/09 12:18:41 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	a;

	a = 0;
	if (!s)
		return ;
	if (s[a] == '\0')
		ft_putchar_fd('\n', fd);
	else
	{	
		while (s[a + 1])
		{
			ft_putchar_fd(s[a], fd);
			a++;
		}
		if (s[a] != '\0' && s[a + 1] == '\0')
		{	
			ft_putchar_fd (s[a], fd);
			ft_putchar_fd ('\n', fd);
		}
	}	
}

/*int	main()
{
	ft_putendl_fd("", 2);
	ft_putendl_fd("deserto", 1);
	return (0);
}*/
