/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oprrarrb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 08:39:11 by tstrassb          #+#    #+#             */
/*   Updated: 2023/01/26 08:56:37 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rr(t_list **stack)
{
	t_list	*temp;
	t_list	*end;

	if (!(*stack) || !((*stack)->next))
		return ;
	temp = *stack;
	end = ft_lstlast(*stack);
	while ((*stack)->next->next)
		*stack = (*stack)->next;
	end->next = temp;
	(*stack)->next = NULL;
	*stack = end;
}

void	rra(t_list **stack1)
{
	ft_rr(stack1);
	write (1, "rra\n", 4);
}

void	rrb(t_list **stack2)
{
	ft_rr(stack2);
	write (1, "rrb\n", 4);
}
