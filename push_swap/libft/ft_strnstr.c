/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjoves <brjoves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:27:05 by brjoves           #+#    #+#             */
/*   Updated: 2023/09/28 20:27:05 by brjoves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*n;

	n = needle;
	if (*n == '\0')
		return ((char *)haystack);
	while (len--)
	{
		if (*n == *haystack)
			n++;
		else
		{
			haystack -= (n - needle);
			len += (n - needle);
			n = needle;
		}
		haystack++;
		if (*n == '\0')
			return ((char *)(haystack - (n - needle)));
		if (*haystack == '\0')
			break ;
	}
	return (NULL);
}
