/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:18:18 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/09 12:18:19 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	a;

	a = 0;
	if (!s)
		return ;
	while (s[a])
	{
		write(fd, &s[a], 1);
		a++;
	}
}

/*int	main()
{
	ft_putstr_fd("ahcvjc",2);
	return (0);
}*/
