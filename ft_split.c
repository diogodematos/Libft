/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:12:03 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/11/10 15:02:38 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_size(char const *str, char c)
{
	int	a;
	int	i;

	a = 0;
	i = 0;
	while (str[a])
	{
		if (str[a] != c)
			i++;
		a++;
	}
	return (i);
}

static int	end(char const *str, char c)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] != c)
			a++;
		else
			return (a);
	}
	return (a);
}

char	**ft_split(char const *s, char c)
{
	size_t	a;
	size_t	b;
	int		i;
	char	**split;

	if (!s)
		return (0);
	split = malloc((count_size(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	a = -1;
	b = 0;
	i = -1;
	while (++a <= ft_strlen(s))
	{
		if (s[a] != c && i < 0)
			i = a;
		else if ((s[a] == c || a == ft_strlen(s)) && i >= 0)
		{
			split[b++] = ft_substr(s, i, end(&s[i], c));
			i = -1;
		}
	}
	split[b] = 0;
	return (split);
}

/*int	main(void)
{
	char	*str = "      split       this for   me  !       ";
	char	sep = ' ';
	char	**result = ft_split(str, sep);
	int		i;

	i = 0;
	while (result[i])
	{
		puts(result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
