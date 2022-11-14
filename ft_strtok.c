/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:35:27 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/04 12:23:55 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strccpy(char *str, char c, int	len)
{
	static int	i = 0;
	char		*cpy;
	int			x;

	x = 0;
	while (str[i] != c)
		cpy[x++] = str[i++];
	return (cpy);
}

static int	verif(char *str, int len)
{
	int	i;
	int	count;

	i = 0;
	while (i <= len)
	{
		if (str[i] == -1)
			count++;
		i++;
	}
	return (count);
}

static char	strclnr(char	*str, const char sep)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	while (str[i])
	{
		if (str[i] == sep)
			str[i] = -1;
		i++;
	}
	return (str);
}

static char ft_strtok_custom(char *str, const char *sep)
{
	int	i;
	int	lenstr;
	int	lensep;

	i = 0;
	lenstr = ft_strlen(str);
	lensep = ft_strlen(sep);
	while (i <= sep)
	{
		ft_strclnr(str, sep[i]);
		i++;
	}
	if (verif(str, lenstr) == lenstr)
		return (NULL);
	return (str);
}

char **ft_split(char const *s, char c)
{
	char	**strtab;
	int		len;

	len = ft_strlen(s);
	strtab = malloc((len + 1) * sizeof(char *)
