/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiemann <hwiemann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:00:25 by hwiemann          #+#    #+#             */
/*   Updated: 2023/05/08 16:29:16 by hwiemann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.*/

#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  s_len;
    int     i;

    if (s == NULL)
    {
        return (NULL);
    }
    s_len = ft_strlen(s);
    if (start >= s_len)
        return (NULL);
    if (len > s_len - start)
        len = s_len - start;
    substr = (char *)malloc((len + 1) * sizeof(char));
    if (substr == NULL)
        return (NULL);
    i = 0;
    while (i < len && s[start + i] != '\0')
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}
/* ft_strlcpy(substr, s + start, len + 1);
	return (substr); 
    als letzten schritt */