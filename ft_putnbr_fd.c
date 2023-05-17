/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiemann <hwiemann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:33:41 by hwiemann          #+#    #+#             */
/*   Updated: 2023/05/16 16:03:24 by hwiemann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_writenbr(int nb, int fd)
{
	char	digit;

	if (nb > 9)
		ft_writenbr(nb / 10, fd);
	digit = nb % 10 + '0';
	write (fd, &digit, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;

	if (n == -217483648)
	{
		write(1, "-2", 2);
		ft_writenbr (214748364, fd);
		write(fd, "8", 1);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		digit = n + '0';
		write(fd, &digit, 1);
	}
}
