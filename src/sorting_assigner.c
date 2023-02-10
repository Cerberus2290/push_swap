/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_assigner.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:33:30 by tstrassb          #+#    #+#             */
/*   Updated: 2023/02/01 10:30:02 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_threenbr(t_swap *tab)
{
	t_list	*bottom;

	if (sorting_check(&tab->stack_a))
		return ;
	bottom = ft_lstlast(tab->stack_a);
	if (sorting_rev(tab))
	{
		sa(&tab->stack_a);
		rra(&tab->stack_a);
	}
	else if (tab->stack_a->content < bottom->content
		&& tab->stack_a->next->content < bottom->content)
		sa(&tab->stack_a);
	else if (tab->stack_a->content > bottom->content
		&& tab->stack_a->next->content < bottom->content)
		ra(&tab->stack_a);
	else if (tab->stack_a->content < bottom->content
		&& tab->stack_a->next->content > bottom->content)
	{
		sa(&tab->stack_a);
		ra(&tab->stack_a);
	}
	else if (tab->stack_a->content > bottom->content
		&& tab->stack_a->next->content > bottom->content)
		rra(&tab->stack_a);
}

void	sorting_fivenbr(t_swap *tab)
{
	int	i;

	i = ft_lstsize(tab->stack_a);
	while (i--)
	{
		if (tab->stack_a->index == 0 || tab->stack_a->index == 1)
			pb(&tab->stack_a, &tab->stack_b);
		else
			ra(&tab->stack_a);
	}
	sorting_threenbr(tab);
	pa(&tab->stack_a, &tab->stack_b);
	pa(&tab->stack_a, &tab->stack_b);
	if (tab->stack_a->content > tab->stack_a->next->content)
		sa(&tab->stack_a);
}

void	check_sort(t_swap *tab)
{
	int	i;

	i = ft_lstsize(tab->stack_a);
	if (sorting_check(&tab->stack_a))
		return ;
	if (i == 2)
	{
		if (tab->stack_a->content > tab->stack_a->next->content)
			sa(&tab->stack_a);
	}
	else if (i == 3)
		sorting_threenbr(tab);
	else if (i == 5)
		sorting_fivenbr(tab);
	else
		sort_quick(&tab->stack_a, &tab->stack_b, ft_lstsize(tab->stack_a));
}
