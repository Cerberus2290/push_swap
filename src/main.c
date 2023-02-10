/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:22:05 by tstrassb          #+#    #+#             */
/*   Updated: 2023/02/10 11:08:54 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_init(char **ag, int ac)
{
	t_list	*temp;
	t_list	*rest;
	int		i;
	long	num;

	if (ac == 2)
		i = 0;
	else
		i = 1;
	rest = NULL;
	while (ag[i])
	{
		num = atol(ag[i]);
		if (num > INT_MAX || num < INT_MIN || ft_check(rest, num, ag[i]) == 0)
		{
			ft_lstclear(&rest);
			ft_putstr_fd("Error\n", 2);
			return (NULL);
		}
		temp = ft_lstnew(num);
		ft_lstadd_back(&rest, temp);
		temp->index = -1;
		i++;
	}
	return (rest);
}

int	main(int argc, char **argv)
{
	t_swap	*tab;
	char	**args;

	if (argc == 1)
		return (0);
	tab = ft_calloc(1, sizeof(t_swap));
	if (!tab)
		return (-1);
	if (argc == 2)
	{	
		args = ft_split(argv[1], ' ');
		free_split(args);
	}
	else
		args = argv;
	tab->stack_a = ft_init(args, argc);
	if (tab->stack_a == NULL)
	{
		free_stacks_and_tab(tab);
		return (-1);
	}
	tab->asize = ft_lstsize(tab->stack_a);
	add_index(tab->stack_a);
	check_sort(tab);
	free_stacks_and_tab(tab);
}
