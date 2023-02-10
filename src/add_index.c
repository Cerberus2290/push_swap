/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:09:39 by tstrassb          #+#    #+#             */
/*   Updated: 2023/01/25 13:26:22 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	replace_index(t_list *lst, int i, int j)
{
	t_list	*temp;

	temp = lst;
	while (temp)
	{
		if (temp->index == -1 && temp->content == i)
			break ;
		temp = temp->next;
	}
	temp->index = j;
}

int	nbr_min(t_list *lst)
{
	t_list		*temp;
	long int	min;

	min = LONG_MAX;
	temp = lst;
	while (temp)
	{
		if (temp->index == -1 && temp->content < min)
			min = temp->content;
		temp = temp->next;
	}
	return (min);
}

void	add_index(t_list *lst)
{
	int	i;
	int	lenght;
	int	min;

	i = 0;
	lenght = ft_lstsize(lst);
	while (i < lenght)
	{
		min = nbr_min(lst);
		replace_index(lst, min, i);
		i++;
	}
}
