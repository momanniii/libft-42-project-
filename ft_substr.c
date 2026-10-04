/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalmoma <abalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 23:01:20 by abalmoma          #+#    #+#             */
/*   Updated: 2026/09/25 03:01:26 by abalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;
	size_t	cpy_len;

	i = 0;
	if (!s)
		return (NULL);
	cpy_len = ft_strlen(s);
	if (start >= cpy_len)
		return (ft_strdup(""));
	cpy_len = ft_strlen(s) - start;
	if (cpy_len >= len)
		cpy_len = len;
	a = malloc(sizeof(char) * (cpy_len + 1));
	if (!a)
		return (NULL);
	while (s[start] && cpy_len > i)
	{
		a[i] = s[start];
		i++;
		start++;
	}
	a[i] = '\0';
	return (a);
}
