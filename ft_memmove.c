/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:10:38 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/05 02:11:16 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
    unsigned int    i;

    i = 0;
    if (dst == NULL && src == NULL)
        return (NULL);
    if ((char *)dst > (char *)src)
    {
        while (len > 0)
        {
            len--;
            (char *)dst[len] = (char *)src[len];
        }
    }
    else if ((char *)dst < (char *)src)
    {
        while (len > i)
        {
            (char *)dst[i] = (char *)src[i];
            i++;
        }
        
    }
    return (dst);
}