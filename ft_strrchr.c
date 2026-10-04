/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalmoma <abalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 15:54:19 by abalmoma          #+#    #+#             */
/*   Updated: 2026/09/25 05:59:14 by abalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	if ((char)c == '\0')
		return ((char *)(s + len));
	while (len > 0)
	{
		len--;
		if (s[len] == (char)c)
			return ((char *)(s + len));
	}
	return (NULL);
}
