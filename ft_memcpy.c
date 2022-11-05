/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:26:59 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/05 01:51:09 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include "libft.h"

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int	i;

	while (i != n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
