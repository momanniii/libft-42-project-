/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalmoma <abalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 14:28:02 by abalmoma          #+#    #+#             */
/*   Updated: 2026/09/25 03:05:11 by abalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;
	size_t				i;

	i = 0 ;
	if (!dest && !src)
		return (NULL);
	a = (unsigned char *)dest;
	b = (const unsigned char *)src;
	while (n > i)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}
