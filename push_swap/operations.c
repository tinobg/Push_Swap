/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjoves <brjoves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 23:17:54 by brjoves           #+#    #+#             */
/*   Updated: 2023/11/07 17:39:21 by brjoves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*second_last;
	t_stack	*third_last;
	t_stack	*last;

	if (ft_sizelst(*stack) <= 1)
		ft_putendl_fd("Stack is empty or has only one element", 1);
	if (ft_sizelst(*stack) == 2)
	{
		last = ft_lastlst(*stack);
		last->n = *stack;
		(*stack)->n = 0;
		*stack = last;
	}
	else
	{
		second_last = *stack;
		while (second_last->n->n->n)
			second_last = second_last->n;
		third_last = second_last->n;
		last = third_last->n;
		second_last->n = last;
		last->n = third_last;
		third_last->n = 0;
	}
}

void	push(t_stack **stack_src, t_stack **stack_dest)
{
	t_stack	*third_last;

	if (ft_sizelst(*stack_src) == 0)
		ft_putendl_fd("No value in source stack", 1);
	ft_addbacklst(stack_dest, ft_lastlst(*stack_src));
	if (ft_sizelst(*stack_src) == 1)
		*stack_src = NULL;
	else
	{
		third_last = *stack_src;
		while (third_last->n->n)
			third_last = third_last->n;
		third_last->n = NULL;
	}
}

void	rotate(t_stack **stack)
{
	t_stack	*third_last;
	t_stack	*last;

	if (ft_sizelst(*stack) <= 1)
		ft_putendl_fd("Stack is empty or has only one element", 1);
	third_last = *stack;
	while (third_last->n->n)
		third_last = third_last->n;
	last = third_last->n;
	third_last->n = NULL;
	last->n = *stack;
	*stack = last;
}

void	reverse_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (ft_sizelst(*stack) <= 1)
		ft_putendl_fd("Stack is empty or has only one element", 1);
	last = ft_lastlst(*stack);
	first = *stack;
	*stack = first->n;
	last->n = first;
	first->n = NULL;
	return ;
}
