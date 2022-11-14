/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:35:27 by ale-roux          #+#    #+#             */
/*   Updated: 2022/11/13 18:27:09 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int  ft_tabclen(char *str, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            count++;
            while (str[i] == c)
              i++;
        i++;
    }
    return (count + 1);
}

int ft_strclen(char *str, char c)
{
    int         i;
    static int  ii = 0;

    i = 0;
    while (str[ii] != '\0' && str[ii] != c)
    {
        i++;
        ii++;
    }
    while (str[ii] == c)
      ii++;
    return (i);
}

static char *ft_strccpy(char *str, char c)
{
    static int  i = 0;
    char        *cpy;
    int     x;

    x = 0;
    cpy = malloc((ft_strclen(str, c) + 1) * sizeof (char));
    while (str[i] != c && str[i] != '\0')
        cpy[x++] = str[i++];
    cpy[x] = '\0';
    while (str[i] == c)
      i++;
    return (cpy);
}

char    **ft_split(char const *s, char c)
{
    char    **tab;
    int     tablen;
    int     i;
    int     len;

    i = 0;
    len = ft_strlen((char *)s);
    tablen = ft_tabclen((char *)s, c);
    tab = malloc((tablen + 1 ) * sizeof(char *));
    while (i < tablen)
    {
        tab[i] = ft_strccpy((char *)s, c);
        i++;
    }
	tab[i] = 0;
    return (tab);
}
