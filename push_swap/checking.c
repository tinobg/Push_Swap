/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjoves <brjoves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:48:05 by brjoves           #+#    #+#             */
/*   Updated: 2023/11/07 17:40:05 by brjoves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checksort(t_stack **stack)
{
	t_stack	*lst;

	lst = *stack;
	while (lst->n)
	{
		if (lst->nbr < lst->n->nbr)
			return (0);
		lst = lst->n;
	}
	return (1);
}

int	emptycheck(t_stack **stack)
{
	if (!*stack)
		return (1);
	else
		return (0);
}

int	checkdouble(char **av, int nb, int i)
{
	i++;
	while (av[i])
	{
		if (ft_atoi(av[i]) == nb)
			return (1);
		i++;
	}
	return (0);
}

int	checknumber(char *str)
{
	int	i;

	i = 0;
	if (str && str[0] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
