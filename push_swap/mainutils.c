/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjoves <brjoves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:04:01 by brjoves           #+#    #+#             */
/*   Updated: 2023/11/07 17:42:07 by brjoves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	argvsize(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
		return (0);
	while (av[i] != 0)
		i++;
	return (i);
}

void	fill_stack(t_stack **stack_a, int ac, char **av)
{
	t_stack	*new;
	int		i;

	i = 1;
	if (ac == 2)
		i = 0;
	while (av[i])
	{
		new = ft_newlst(ft_atoi(av[i]));
		if (!new)
			return ;
		ft_addfrontlst(stack_a, new);
		i++;
	}
	i = 0;
	while (i < (int []){ac - 1, argvsize(ac, av)}[(ac == 2)])
	{
		new = gnm(stack_a);
		new->i = i++;
	}
}
