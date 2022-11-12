/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:35:27 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/08 10:11:15 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_tabclen(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			count++;
		i++;
	}
	return (count);
}

int	ft_strclen(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

static char	*ft_strccpy(char *str, char c)
{
	static int	i = -1;
	char		*cpy;
	int		x;

	x = 0;
	i++;
	cpy = malloc(ft_strclen(str, c) * sizeof (char));
	while (str[i] != c)
		cpy[x++] = str[i++];
	return (cpy);
}

char	**ft_split(char const *s, char c)
{
	char	**strtab;
	int		tablen;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen((char *)s);
	tablen = ft_tabclen((char *)s, c);
	strtab = malloc(tablen * sizeof(char *));
	while (i != (tablen + 1))
	{
		strtab[i] = ft_strccpy((char *)s, c);
		i++;
	}
	return (strtab);
}
