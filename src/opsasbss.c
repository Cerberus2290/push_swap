/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opsasbss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:35:31 by tstrassb          #+#    #+#             */
/*   Updated: 2023/01/27 12:03:54 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_s(t_list **stack)
{
	t_list	*temp;

	if (!(*stack) || !((*stack)->next))
		return ;
	temp = *stack;
	*stack = (*stack)->next;
	temp->next = (*stack)->next;
	(*stack)->next = temp;
}

void	sa(t_list **stack1)
{
	ft_s(stack1);
	write (1, "sa\n", 3);
}

void	sb(t_list **stack2)
{
	ft_s(stack2);
	write (1, "sb\n", 3);
}

void	ss(t_list **stack1, t_list **stack2)
{
	ft_s(stack1);
	ft_s(stack2);
	write (1, "ss\n", 3);
}
