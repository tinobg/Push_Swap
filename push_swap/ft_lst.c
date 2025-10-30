/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjoves <brjoves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:07:24 by brjoves           #+#    #+#             */
/*   Updated: 2023/11/09 10:48:52 by brjoves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_newlst(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (0);
	new->nbr = content;
	new->i = -1;
	new->n = NULL;
	return (new);
}

t_stack	*ft_lastlst(t_stack *lst)
{
	while (lst->n)
	{
		if (!lst->n)
			return (lst);
		lst = lst->n;
	}
	return (lst);
}

int	ft_sizelst(t_stack *lst)
{
	int		len;
	t_stack	*tmp;

	len = 0;
	tmp = lst;
	while (tmp != 0)
	{
		tmp = tmp->n;
		len++;
	}
	return (len);
}
