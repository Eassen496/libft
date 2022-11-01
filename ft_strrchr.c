/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:14:59 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/01 23:24:56 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_rlsch(char *str, char c)
{
	int	i;

	i = strlen(str);
	while (i != -1 && str[i] != c)
		i--;
	return (i);
}

char	*strrchr(char *s, int c)
{
	char	chr;
	int		i;

	if (c <= 127 && c >= 0 && c != '\0')
	{
		chr = c;
		i = ft_rlsch(s, chr);
		return (s[i]);
	}
	else
		return (NULL);
}
