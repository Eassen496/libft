/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:49:50 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/02 00:35:44 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_intlen(int nb)
{
	int	pass;

	pass = 0;
	if (nb < 0)
	{
		pass++;
		nb = -nb;
	}
	while ((nb / 10) > 10)
	{
		pass++;
		nb / 10;
	}
	return (pass);
}

char	*ft_itoa(int n)
{
	int		i;
	int		x;
	int		y;
	char	*nbr;

	i = ft_intlen(n);
	y = 0;
	nbr = malloc((i + 1) * sizeof(char));
	if (!nbr)
		return (NULL);
	if (n < 0)
	{
		nbr[0] == '-';
		n = -n;
		y++;
	}
	while (i != y)
	{
		x = n % 10;
		n = n / 10;
		nbr[i--] = x + '0';
	}
	return (nbr);
}
