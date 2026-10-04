/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalmoma <abalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 16:12:31 by abalmoma          #+#    #+#             */
/*   Updated: 2026/09/25 03:05:58 by abalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*b;
	unsigned char		*a;

	if (!dest && !src)
		return (NULL);
	a = (unsigned char *)dest;
	b = (const unsigned char *)src;
	if (a > b)
	{
		while (n > 0)
		{
			n--;
			a[n] = b[n];
		}
	}
	else
	{
		ft_memcpy (dest, src, n);
	}
	return (dest);
}
