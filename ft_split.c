/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:59:09 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/14 14:26:46 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*split_free(char *str)
{
	free(str);
	return (NULL);
}

static char	*split_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		len = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (split_free(str));
	while (s[i])
	{
		if (i >= start && j < len)
			str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}

static void	*split_freetab(char **tab, int w)
{
	int	i;

	i = 0;
	while (i != w)
	{
		free (tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static int	split_sep(char const *s, char c)
{
	char	str;
	int		i;
	int		j;

	str = c;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (str == c && s[i] != c)
			j++;
		str = s[i];
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		w;
	int		i;
	int		j;

	w = 0;
	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char *) * (split_sep(s, c) + 1));
	if (!tab)
		return (0);
	while (s[j] && s[i] && w < split_sep(s, c))
	{
		i = j;
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[j] != c && s[j])
			j++;
		tab[w++] = split_substr(s, i, j - i);
		if (!tab[w - 1])
			return (split_freetab(tab, w));
	}
	tab[w] = NULL;
	return (tab);
}
