/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oprarbrr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:40:28 by tstrassb          #+#    #+#             */
/*   Updated: 2023/01/25 15:24:46 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_r(t_list **stack)
{
	t_list	*top;

	top = *stack;
	if (!(*stack) || !((*stack)->next))
		return ;
	*stack = top->next;
	top->next = NULL;
	ft_lstlast(*stack)->next = top;
}

void	ra(t_list **stack1)
{
	ft_r(stack1);
	write (1, "ra\n", 3);
}

void	rb(t_list **stack2)
{
	ft_r(stack2);
	write (1, "rb\n", 3);
}

void	rr(t_list **stack1, t_list **stack2)
{
	ft_r(stack1);
	ft_r(stack2);
	write (1, "rr\n", 3);
}
