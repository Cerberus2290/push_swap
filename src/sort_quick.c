/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_quick.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 08:47:17 by tstrassb          #+#    #+#             */
/*   Updated: 2023/02/01 10:21:15 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_start(t_list **stack1, t_list **stack2, t_push *push, int c)
{
	int	i;

	i = -1;
	while (++i < c)
	{
		if ((*stack1)->index <= push->mid)
			pb(stack1, stack2);
		else
		{
			if (ft_lstsize(*stack2) > 1 && (*stack2)->index < (push->mid / 2))
				rr(stack1, stack2);
			else
				ra(stack1);
		}
	}
	push->max = push->mid;
	push->mid = (push->max - push->next) / 2 + push->next;
	push->flag++;
}

void	sort_next(t_list **stack1, t_list **stack2, t_push *push)
{
	if (ft_lstsize(*stack2) > 0 && ((*stack2)->index == push->next))
		pa(stack1, stack2);
	else if ((*stack1)->index == push->next)
	{
		(*stack1)->flag = -1;
		ra(stack1);
		push->next++;
	}
	else if ((ft_lstsize(*stack2)) > 2
		&& ft_lstlast(*stack2)->index == push->next)
		rrb(stack2);
	else if ((*stack1)->next->index == push->next)
		sa(stack1);
	else if ((ft_lstsize(*stack1)) > 1 && ((*stack1)->next->index == push->next)
		&& ((*stack2)->next->index == push->next + 1))
		ss(stack1, stack2);
	else
		return ;
	sort_next(stack1, stack2, push);
}

void	sort_quicka(t_list **stack1, t_list **stack2, t_push *push)
{
	int	cb;
	int	i;

	i = -1;
	cb = ft_lstsize(*stack2);
	while (ft_lstsize(*stack2) && ++i < cb)
	{
		if ((*stack2)->index == push->next)
			sort_next(stack1, stack2, push);
		else if ((*stack2)->index >= push->mid)
		{
			(*stack2)->flag = push->flag;
			pa(stack1, stack2);
		}
		else if ((*stack2)->index < push->mid)
			rb(stack2);
	}
	push->max = push->mid;
	push->mid = (push->max - push->next) / 2 + push->next;
	push->flag++;
}

void	sort_quickb(t_list **stack1, t_list **stack2, t_push *push)
{
	int	current;

	current = (*stack1)->flag;
	if ((*stack1)->flag != 0)
	{
		while ((*stack1)->flag == current)
		{
			if ((*stack1)->index != push->next)
				pb(stack1, stack2);
			sort_next(stack1, stack2, push);
		}
	}
	else if ((*stack1)->flag == 0)
	{
		while ((*stack1)->flag != -1)
		{
			if ((*stack1)->index != push->next)
				pb(stack1, stack2);
			sort_next(stack1, stack2, push);
		}
	}
	if (ft_lstsize(*stack2))
		push->max = (find_max_lst(stack2)->index);
	push->mid = (push->max - push->next) / 2 + push->next;
}

void	sort_quick(t_list **stack1, t_list **stack2, int c)
{
	t_push	push;

	push.next = find_min_lst(stack1)->index;
	push.max = find_max_lst(stack1)->index;
	push.mid = push.max / 2 + push.next;
	push.flag = 0;
	sort_start(stack1, stack2, &push, c);
	while (!(sorting_checka(stack1, c)))
	{
		if (ft_lstsize(*stack2) == 0)
			sort_quickb(stack1, stack2, &push);
		else
			sort_quicka(stack1, stack2, &push);
	}
}
