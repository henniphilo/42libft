/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiemann <hwiemann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:31:50 by hwiemann          #+#    #+#             */
/*   Updated: 2023/05/16 17:00:51 by hwiemann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *a1, const void *a2, size_t n)
{
	const unsigned char	*aa1;
	const unsigned char	*aa2;
	size_t				i;

	i = 0;
	aa1 = (const unsigned char *)a1;
	aa2 = (const unsigned char *)a2;
	while (i < n)
	{
		if (aa1[i] != aa2[i])
			return (aa1[i] != aa2[i]);
		i++;
	}
	return (0);
}
