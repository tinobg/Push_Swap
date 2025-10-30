/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjoves <brjoves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:49:44 by brjoves           #+#    #+#             */
/*   Updated: 2023/11/09 14:43:11 by brjoves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newelt;

	newelt = (t_list *)malloc(sizeof(*newelt));
	if (!(newelt))
		return (NULL);
	newelt->content = content;
	newelt->next = NULL;
	return (newelt);
}
