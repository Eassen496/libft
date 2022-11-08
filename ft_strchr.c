/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:55:55 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/08 09:51:14 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lsch(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	char	chr;
	int		i;

	if (c <= 127 && c >= 0 && c != '\0')
	{
		chr = c;
		i = ft_lsch((char *)s, chr);
	}
	else
		return (0);
	return ((char *)&s[i]);
}
