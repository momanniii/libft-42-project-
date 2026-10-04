/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalmoma <abalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 15:35:52 by abalmoma          #+#    #+#             */
/*   Updated: 2026/09/27 19:00:05 by abalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*d;
	const unsigned char	*f;
	size_t				i;

	if (s1 == s2)
		return (0);
	i = 0;
	d = s1;
	f = s2;
	while (n > i)
	{
		if (d[i] != f[i])
			return (d[i] - f[i]);
		i++;
	}
	return (0);
}
