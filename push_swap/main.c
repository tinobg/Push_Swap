/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjoves <brjoves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:54:14 by brjoves           #+#    #+#             */
/*   Updated: 2023/11/04 16:19:40 by brjoves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort(t_stack **stack_a, t_stack **stack_b)
{
	int	len;

	len = ft_sizelst(*stack_a);
	if (len <= 1 || checksort(stack_a))
		return ;
	else if (len == 2)
		sa(stack_a);
	else if (len == 3)
		three_elements_sort(stack_a);
	else if (len == 4)
		four_elements_sort(stack_a, stack_b);
	else if (len == 5)
		five_elements_sort(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (!bigcheck(ac, &av))
	{
		if (ac == 2)
		{
			freeargv(av);
			free(av);
		}
		return (0);
	}
	if (ac < 2)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	fill_stack(&stack_a, ac, av);
	sort(&stack_a, &stack_b);
	if (ac == 2)
	{
		freeargv(av);
		free(av);
	}
	ft_clearlst(&stack_a);
	return (0);
}
