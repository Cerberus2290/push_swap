/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:08:02 by tstrassb          #+#    #+#             */
/*   Updated: 2023/02/10 10:37:39 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stacks_and_tab(t_swap *tab)
{
	t_list	*node_a;
	t_list	*node_b;

	node_a = tab->stack_a;
	while (node_a != NULL)
	{
		node_b = node_a->next;
		free(node_a);
		node_a = node_b;
	}
	node_b = tab->stack_b;
	while (node_b != NULL)
	{
		node_a = node_b->next;
		free(node_b);
		node_b = node_a;
	}
	free(tab);
}

void	free_split(char **str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	ft_check(t_list *lst, int i, char *num)
{
	t_list	*temp;
	int		j;

	temp = lst;
	j = 0;
	while (num[j])
	{
		if (!(((num[j] == '-' || num[j] == '+') && ft_isdigit(num[j + 1])
					&& (j == 0 || !ft_isdigit(num[j - 1])))
				|| ft_isdigit(num[j])))
			return (0);
		j++;
	}
	while (temp)
	{
		if (temp->content == i)
			return (0);
		temp = temp->next;
	}
	return (1);
}
