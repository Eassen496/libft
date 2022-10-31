/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:19:47 by ale-roux          #+#    #+#             */
/*   Updated: 2022/10/31 23:33:54 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c <= 57) && (c >= 48))
		return (1);
	else
		return (0);
}

int	ft_atoi(char *num)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 0;
	while ((num[i] <= 13 && num[i] >= 9) || (num[i] == ' '))
		i++;
	while (num[i] == '+' || num[i] == '-')
	{
		if (num[i] == '+')
			sign++;
		if (num[i++] == '-')
			sign--;
		result++;
		if (result == 2)
			return (0);
	}
	result = 0;
	while (ft_isdigit(num[i]) == 1)
			result = (result * 10) + (num[i++] - 48);
	return (result * sign);
}
