/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:24:54 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/01 14:42:14 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <time.h>

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	int		i;
	size_t	lenght;

	i = 0;
	lenght = ft_strlen(src);
	while (dst[i] && size > i)
	{
		dst[i++] == src[i];
	}
	dst[size] = '\0';
	return (lenght - 1);
}
