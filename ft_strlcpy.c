/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:24:54 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/08 09:05:38 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <time.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	size_t			lenght;

	i = 0;
	lenght = ft_strlen(src);
	while (dst[i] && dstsize > i)
	{
		dst[i] = src[i];
		i++;
	}
	dst[dstsize] = '\0';
	return (lenght - 1);
}
