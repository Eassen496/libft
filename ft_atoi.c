/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:19:47 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/01 14:45:00 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 0;
	while ((str[i] <= 13 && str[i] >= 9) || (str[i] == ' '))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '+')
			sign++;
		if (str[i++] == '-')
			sign--;
		result++;
		if (result == 2)
			return (0);
	}
	result = 0;
	while (ft_isdigit(str[i]) == 1)
			result = (result * 10) + (str[i++] - 48);
	return (result * sign);
}
