/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjoves <brjoves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:17:46 by brjoves           #+#    #+#             */
/*   Updated: 2023/11/09 10:49:30 by brjoves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_addbacklst(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (new)
	{
		if (!*lst)
		{
			*lst = new;
			return ;
		}
		last = ft_lastlst(*lst);
		last->n = new;
	}
}

void	ft_clearlst(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*lst;

	lst = *stack;
	while (lst != 0)
	{
		tmp = lst->n;
		free(lst);
		lst = tmp;
	}
}

void	ft_addfrontlst(t_stack **lst, t_stack *new)
{
	new->n = (*lst);
	(*lst) = new;
}
