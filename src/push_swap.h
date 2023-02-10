/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:13:34 by tstrassb          #+#    #+#             */
/*   Updated: 2023/02/10 10:37:36 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>

typedef struct s_push
{
	int	next;
	int	max;
	int	mid;
	int	flag;
}	t_push;

typedef struct s_swap
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		asize;
	int		bsize;
}	t_swap;

void	check_sort(t_swap	*tab);
int		sorting_check(t_list **stack1);
int		sorting_checka(t_list **stack1, int count);
t_list	*find_min_lst(t_list **stack);
t_list	*find_max_lst(t_list **stack);
int		sorting_rev(t_swap *tab);
int		ft_check(t_list *lst, int i, char *num);
t_list	*ft_init(char **ag, int ac);

void	pa(t_list **stack1, t_list **stack2);
void	pb(t_list **stack1, t_list **stack2);
void	ra(t_list **stack1);
void	rb(t_list **stack2);
void	rr(t_list **stack1, t_list **stack2);
void	sa(t_list **stack1);
void	sb(t_list **stack2);
void	ss(t_list **stack1, t_list **stack2);
void	rra(t_list **stack1);
void	rrb(t_list **stack2);

void	add_index(t_list *lst);

void	sort_quick(t_list **stack1, t_list **stack2, int count);

void	free_stacks_and_tab(t_swap *tab);
void	free_split(char **str);
int		ft_check(t_list *lst, int i, char *num);
#endif