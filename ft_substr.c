/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:19:37 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/02 15:01:08 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;
	int		x;

	i = start;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i != (len + start))
		str[x++] = s[i++];
	str[x] = 0;
	return (str);
}
