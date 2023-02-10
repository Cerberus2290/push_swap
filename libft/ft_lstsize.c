/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:08:09 by tstrassb          #+#    #+#             */
/*   Updated: 2023/02/01 09:13:29 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_lstsize(t_list *lst)
{
	long int	len;
	t_list		*start;

	len = 0;
	start = lst;
	if (start == NULL)
		return (0);
	while (start->next != 0)
	{
		start = start->next;
		len++;
	}
	if (start->next == 0)
		len++;
	return (len);
}
