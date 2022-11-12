/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:49:50 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/13 00:35:09 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	intlen(long int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb = -nb;
		len++;
	}
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

static int	inttonb(long int nb)
{
	long int		ret;
	static long int	rest = -1;

	if (rest == -1)
	{
		if (nb > 0)
			rest = nb;
		else
			rest = -nb;
	}
	ret = rest % 10;
	rest = rest / 10;
	return (ret + '0');
}

char	*ft_itoa(int n)
{
	int		i;
	int		y;
	char	*nbr;

	i = intlen(n);
	y = 0;
	nbr = malloc((i + 1) * sizeof(char));
	if (!nbr)
		return (NULL);
	nbr[i] = '\0';
	if (n < 0)
	{
		nbr[0] = '-';
		y++;
	}
	while (i > y)
		nbr[--i] = inttonb(n);
	return (nbr);
}
