/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:24:54 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/08 15:27:02 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <time.h>

unsigned int	ft_size_src(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	size_src;
	char			*str;

	str = (char *)src;
	size_src = ft_size_src(str);
	if (dstsize == 0)
		return (size_src);
	i = 0;
	while (str[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = str[i];
		++i;
	}
	while (i <= dstsize)
	{
		dst[i] = '\0';
		i++;
	}
	return (size_src);
}
