/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:35:27 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/08 09:22:55 by ale-roux         ###   ########.fr       */
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

static char	*ft_strccpy(char *str, char c)
{
	static int	i = 0;
	char		*cpy;
	int			x;

	x = 0;
	cpy = str;
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
	char	*str;

	i = 0;
	str = (char *)s;
	len = ft_strlen(str);
	tablen = ft_tabclen(str, c);
	strtab = malloc((tablen) * sizeof(char *));
	while (i != (tablen + 1))
	{
		strtab[i] = ft_strccpy(str, c);
		i++;
	}
	return (strtab);
}
