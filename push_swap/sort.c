/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjoves <brjoves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:13:19 by brjoves           #+#    #+#             */
/*   Updated: 2023/11/09 10:58:59 by brjoves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_elements_sort(t_stack **stack_a)
{
	if ((*stack_a)->i < (*stack_a)->n->i && (*stack_a)->n->i < (*stack_a)-> \
			n->n->i && (*stack_a)->n->n->i > (*stack_a)->i)
	{
		ra(stack_a);
		sa(stack_a);
	}
	if ((*stack_a)->i < (*stack_a)->n->i && (*stack_a)->n->i > (*stack_a)-> \
			n->n->i && (*stack_a)->n->n->i > (*stack_a)->i)
		rra(stack_a);
	if ((*stack_a)->i > (*stack_a)->n->i && (*stack_a)->n->i < (*stack_a)-> \
			n->n->i && (*stack_a)->n->n->i > (*stack_a)->i)
		ra(stack_a);
	if ((*stack_a)->i < (*stack_a)->n->i && (*stack_a)->n->i > (*stack_a)-> \
			n->n->i && (*stack_a)->n->n->i < (*stack_a)->i)
	{
		rra(stack_a);
		sa(stack_a);
	}
	if ((*stack_a)->i > (*stack_a)->n->i && (*stack_a)->n->i < (*stack_a)-> \
			n->n->i && (*stack_a)->n->n->i < (*stack_a)->i)
		sa(stack_a);
}

void	four_elements_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		i;

	tmp = *stack_a;
	i = 0;
	while (tmp)
	{
		if (tmp->i == 0)
			break ;
		i++;
		tmp = tmp->n;
	}
	if (i == 0)
		rra(stack_a);
	if (i == 1)
		ra(stack_a);
	if (i == 2 || i == 1)
		sa(stack_a);
	pb(stack_b, stack_a);
	three_elements_sort(stack_a);
	pa(stack_a, stack_b);
}

static void	fourorfive_elements_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		i;

	tmp = *stack_a;
	i = 0;
	while (tmp)
	{
		if (tmp->i == 1)
			break ;
		i++;
		tmp = tmp->n;
	}
	if (i == 0)
		rra(stack_a);
	if (i == 1)
		ra(stack_a);
	if (i == 2 || i == 1)
		sa(stack_a);
	pb(stack_b, stack_a);
	three_elements_sort(stack_a);
	pa(stack_a, stack_b);
}

void	five_elements_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		i;

	tmp = *stack_a;
	i = 0;
	while (tmp)
	{
		if (tmp->i == 0)
			break ;
		i++;
		tmp = tmp->n;
	}
	if (i == 0 || i == 1)
		rra(stack_a);
	if (i == 1)
		rra(stack_a);
	if (i == 2)
		ra(stack_a);
	if (i == 2 || i == 3)
		sa(stack_a);
	pb(stack_b, stack_a);
	fourorfive_elements_sort(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first;
	int		len;
	int		i;
	int		j;

	len = ft_sizelst(*stack_a);
	i = 0;
	while (!checksort(stack_a))
	{
		first = *stack_a;
		j = 0;
		while (j < len && first && !checksort(stack_a))
		{
			if ((ft_lastlst(*stack_a)->i >> i) & 1)
				ra(stack_a);
			else
				pb(stack_b, stack_a);
			j++;
		}
		while (!emptycheck(stack_b))
			pa(stack_a, stack_b);
		i++;
	}
}
