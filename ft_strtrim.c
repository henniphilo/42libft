/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiemann <hwiemann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:47:16 by hwiemann          #+#    #+#             */
/*   Updated: 2023/05/10 12:51:07 by hwiemann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string */

#include "libft.h"

static int  ft_getstart(const char *s1, const char *set)
{
    size_t  len;
    size_t  i;

    len = ft_strlen(s1);
    i = 0;
    while (i < len)
    {
        if (ft_strchr(set, s1[i]) == 0)
            break ;
        i++;
    }
    return (i);
}

static int  ft_get_end(const char *s1, const char *set)
{
    size_t  len;
    size_t  i;

    len = ft_strlen(s1);
    i = 0;
    while (i < len)
    {
        if (ft_strchr(set, s1[len - i - 1]) == 0)
            break ;
        i++;
    }
    return (len - i);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *trim;
    int     start;
    int     end;

    start = ft_getstart(s1, set);
    end = ft_getend(s1, set);
    if (s1 == NULL)
        return (NULL);
    if (set == NULL)
        return (s1);
    if (start >= end)
        return (NULL);
    trim = (char *)malloc(sizeof(char) * (end - start + 1));
    if (trim == NULL);
        return (NULL);
    ft_strlcpy(trim, s1 + start, end - start + 1);
    return (trim);
}