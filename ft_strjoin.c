/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:33:23 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/13 13:55:54 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	char	*str;

	i = ft_strlen(s1);
	x = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	str = (char *) malloc((i + x + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	x = 0;
	while (s1[x])
		str[i++] = s1[x++];
	x = 0;
	while (s2[x])
		str[i++] = s2[x++];
	str[i] = '\0';
	return (str);
}	
