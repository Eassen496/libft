/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:35:27 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/04 12:47:18 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_tabclen(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			count++;
		i++;
	}
	return (count);
}

static int	ft_strclen(char *str, char c)
{
	static int	i = 0;

	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

static char	*ft_strccpy(char *str, char c)
{
	static int	i = 0;
	char		*cpy;
	int			x;

	x = 0;
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
	len = ft_strlen(str);
	tablen = ft_tabclen(s);
	strtab = malloc((tablen) * sizeof(char *));
	while (i != (tablen + 1))
	{
		strtab[i] = ft_strccpy(s, c, len);
		i++;
	}
	return (strtab);
}
