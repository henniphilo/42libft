/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiemann <hwiemann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:50:53 by hwiemann          #+#    #+#             */
/*   Updated: 2023/05/16 16:40:55 by hwiemann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getdigits(int n)
{
	size_t	i;

	i = 1;
	while (n)
		n /= 10;
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str_number;
	size_t		digits;
	long int	num;

	num = n;
	digits = ft_getdigits(n);
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	str_number = (char *)malloc(sizeof(char) * (digits + 1));
		if (!str_number)
		return (NULL);
	*(str_number + digits) = 0;
	while (digits--)
	{
		*(str_number + digits) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str_number + 0) = '-';
	return (str_number);
}
/*    *(str_number + digits) = 0; stellt sicher das der string mit null 
terminiert, dann geht er von hinten die einzelnen stellen durch */