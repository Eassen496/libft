/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:11:22 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/02 10:42:18 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*calloc(size_t count, size_t size)
{
	void	*ptr;
	int		i;

	ptr = malloc(count * size);
	while (i != count)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
