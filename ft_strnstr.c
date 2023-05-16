/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiemann <hwiemann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:57:00 by hwiemann          #+#    #+#             */
/*   Updated: 2023/05/08 12:57:04 by hwiemann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *)hay);
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == hay[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)hay + 1);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
