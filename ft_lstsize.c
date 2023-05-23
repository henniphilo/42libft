/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiemann <hwiemann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:10:03 by hwiemann          #+#    #+#             */
/*   Updated: 2023/05/23 13:18:19 by hwiemann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Counts the number of nodes in a list.*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;
	t_list	*pos;

	count = 0;
	pos = lst;
	while (pos != NULL)
	{
		count++;
		pos = pos->next;
	}
	return (count);
}
