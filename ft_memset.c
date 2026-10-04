/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalmoma <abalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 13:59:11 by abalmoma          #+#    #+#             */
/*   Updated: 2026/09/27 19:16:23 by abalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	if (!s)
		return (0);
	i = 0;
	a = (unsigned char *)s;
	while (n > i)
	{
		a[i] = (unsigned char )c;
		i++;
	}
	return (s);
}
