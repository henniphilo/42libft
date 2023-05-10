/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiemann <hwiemann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:59:40 by hwiemann          #+#    #+#             */
/*   Updated: 2023/05/08 15:47:45 by hwiemann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  strdup() function returns a pointer to a new string which is a 
duplicate of the string s.  Memory for the new string  is  obtained  with
malloc(3), and can be freed with free(3) */

#include "libft.h"

char	*ft_strdup (const char *s)
{
    int     i;
    int     len;
    char    *ptr;

    i = 0;
    len = ft_strlen(src);
    if ((ptr = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
        return (NULL);
    while (i < len)
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}