/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:19:37 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/13 16:59:25 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;
	int				x;

	i = start;
	x = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start > ft_strlen(s))
		return (ft_calloc(1, 1));
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i != (len + start))
		str[x++] = s[i++];
	str[x] = 0;
	return (str);
}
