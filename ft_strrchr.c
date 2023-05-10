/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiemann <hwiemann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:57:12 by hwiemann          #+#    #+#             */
/*   Updated: 2023/05/08 12:57:22 by hwiemann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    while (str[i] != c && i >= 0)
    {
        i--;
    }
    if (str[i] == c)
    {
        return ((char *)s);
    }
    else
        return ((char *) NULL);
}