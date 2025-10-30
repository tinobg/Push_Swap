/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjoves <brjoves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:28:10 by brjoves           #+#    #+#             */
/*   Updated: 2023/11/07 17:38:31 by brjoves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*gnm(t_stack **stack_a)
{
	t_stack	*first;
	t_stack	*min;

	first = *stack_a;
	while (first && first->i != -1)
		first = first->n;
	min = first;
	while (first)
	{
		if (first->i == -1 && first->nbr < min->nbr)
			min = first;
		first = first->n;
	}
	return (min);
}

int	intmax(char *str)
{
	char	*max;
	int		i;
	int		j;

	max = "-2147483647";
	i = 0;
	j = 0;
	if (ft_strlen(str) > 11)
		return (1);
	else if (ft_strlen(str) < 10 || ft_strncmp(str, "-2147483648", 11) == 0
		|| (str[0] == '-' && ft_strlen(str) == 10))
		return (0);
	if (str[0] != '-')
		j = 1;
	while (str[i] != '\0')
	{
		if (str[i] > max[j])
			return (1);
		j++;
		i++;
	}
	return (0);
}

void	freeargv(char **av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	while (i--)
		free(av[i]);
}
