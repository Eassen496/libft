/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:56:15 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/08 09:23:22 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				result;

	i = 0;
	result = 0;
	while ((i <= n) && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else
			result = s1[i] - s2[i];
	}
	return (result);
}
