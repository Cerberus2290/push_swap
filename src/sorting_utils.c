/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:13:47 by tstrassb          #+#    #+#             */
/*   Updated: 2023/01/26 11:28:09 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorting_check(t_list **stack1)
{
	t_list	*temp;

	temp = *stack1;
	while (temp && temp->next)
	{
		if (temp->content > temp->next->content)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	sorting_checka(t_list **stack1, int c)
{
	int	i;

	i = ft_lstsize(*stack1);
	if (i != c)
		return (0);
	if (sorting_check(stack1) == 0)
		return (0);
	return (1);
}

t_list	*find_min_lst(t_list **stack)
{
	t_list	*min;
	t_list	*temp;

	min = *stack;
	temp = *stack;
	while (temp)
	{
		if (temp->content < min->content)
			min = temp;
		temp = temp->next;
	}
	return (min);
}

t_list	*find_max_lst(t_list **stack)
{
	t_list	*max;
	t_list	*temp;

	max = *stack;
	temp = *stack;
	while (temp)
	{
		if (temp->content > max->content)
			max = temp;
		temp = temp->next;
	}
	return (max);
}

int	sorting_rev(t_swap *tab)
{
	t_list	*temp;

	temp = tab->stack_a;
	while (temp->next)
	{
		if (temp->content < temp->next->content)
			return (0);
		temp = temp->next;
	}
	return (1);
}
