/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalmoma <abalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 21:07:36 by abalmoma          #+#    #+#             */
/*   Updated: 2026/09/25 06:10:20 by abalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*a;

	if (n && size > SIZE_MAX / n)
		return (NULL);
	a = malloc(n * size);
	if (!a)
		return (NULL);
	ft_bzero(a, n * size);
	return (a);
}
