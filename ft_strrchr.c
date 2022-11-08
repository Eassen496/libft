/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:14:59 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/08 09:28:59 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_rlsch(char *str, char c)
{
	int	i;

	i = ft_strlen(str);
	while (i != -1 && str[i] != c)
		i--;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	int		i;
	char	*str;

	str = (char *)s;
	if (c <= 127 && c >= 0 && c != '\0')
	{
		chr = c;
		i = ft_rlsch(str, chr);
	}
	else
		return (NULL);
	return ((char *)&s[i]);
}
