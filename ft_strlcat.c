/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:05:26 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/08 08:51:47 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	x;

	len = ft_strlen(dst);
	x = len + 1;
	i = 0;
	if (len >= dstsize)
	{
		while ((dstsize - x) == 0)
		{
			dst[x] = src[i];
			i++;
			x++;
		}
		dst[dstsize] = '\0';
	}
	return (x - ft_strlen(dst));
}
