/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 01:24:11 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/08 09:32:57 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	charsrch(char *s1, char *set)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (set[x])
	{
		if (s1[i++] == set[x])
			x = 0;
		x++;
	}
	return (i);
}

static int	charrsrch(char *s1, char *set)
{
	int	i;
	int	x;
	int	len;

	x = 0;
	i = ft_strlen(s1);
	len = ft_strlen(s1);
	while (set[x])
	{
		if (s1[i--] == set[x])
			x = 0;
		x++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		x;
	int		mallocsize;
	char	*str;

	i = charsrch((char *)s1, (char *)set);
	mallocsize = ft_strlen((char *)s1) - charrsrch((char *)s1, (char *)set) - i;
	str = malloc((mallocsize + 1) * sizeof(char));
	if (!str)
		return (NULL);
	x = 0;
	while (x <= mallocsize)
		str[x++] = s1[i++];
	return (str);
}
