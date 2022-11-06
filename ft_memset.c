/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:11:54 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/06 23:51:18 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>

void	*memset(void *b, int c, size_t len)
{
	unsigned int	i;
	char			*str2;
	char			chr;

	i = 0;
	str2 = b;
	chr = c;
	while (i < len)
	{
		str2[i] = chr;
		i++;
	}
	return (str2);
}
