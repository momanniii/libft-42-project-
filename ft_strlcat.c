/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalmoma <abalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 14:08:36 by abalmoma          #+#    #+#             */
/*   Updated: 2026/09/27 19:38:56 by abalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen(src);
	j = 0;
	dlen = 0;
	while (dst && size > dlen && dst[dlen])
		dlen++;
	i = dlen;
	if (size <= dlen)
		return (slen + size);
	while (src[j] && size > i + 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dlen + slen);
}
