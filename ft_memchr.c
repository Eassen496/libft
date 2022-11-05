/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:01:39 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/05 02:05:06 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = s;
	while (i != n)
	{
		if (str[i] == c)
			return (str[i]);
		i++;
	}
	return (NULL);
}
