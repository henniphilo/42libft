/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiemann <hwiemann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:50:53 by hwiemann          #+#    #+#             */
/*   Updated: 2023/05/22 15:35:26 by hwiemann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getdigits(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str_number;
	size_t		digits;
	long int	num;

	num = n;
	digits = ft_getdigits(n);
	str_number = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str_number)
		return (NULL);
	if (n < 0)
	{
		*(str_number + 0) = '-';
		num *= -1;
	}
	*(str_number + digits) = '\0';
	while (digits-- > 0)
	{
		*(str_number + digits) = num % 10 + '0';
		num = num / 10;
	}
	return (str_number);
}
/*    *(str_number + digits) = 0; stellt sicher das der string mit null 
terminiert, dann geht er von hinten die einzelnen stellen durch */
