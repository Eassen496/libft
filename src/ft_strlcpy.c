/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:24:54 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/01 00:17:26 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
		;
	return (i);
}

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = ft_strlen(src);
	while (dst[i] && size > i)
	{
		dst[i++] == src[i];
	}
	dst[size] = '\0';
	return (lenght - 1);
}
