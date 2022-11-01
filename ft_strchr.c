/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:55:55 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/01 23:26:44 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_lsch(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

char	*strchr(char *s, int c)
{
	char	chr;
	int		i;

	if (c <= 127 && c >= 0 && c != '\0')
	{
		chr = c;
		i = ft_lsch(s, chr);
		return (s[i]);
	}
	else
		return (NULL);
}
