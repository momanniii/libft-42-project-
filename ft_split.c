/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalmoma <abalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 08:41:10 by abalmoma          #+#    #+#             */
/*   Updated: 2026/09/25 08:53:03 by abalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*make_word(char const *s, int start, int end)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = end - start;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	while (len > i)
	{
		word[i] = s[start + i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	*free_array(char **res, int j)
{
	while (j > 0)
	{
		j--;
		free(res[j]);
	}
	free(res);
	return (NULL);
}

static char	**ft_alloc(char const *s, char c, int count)
{
	char	**res;
	int		i;
	int		j;
	int		start;

	res = malloc(sizeof(char *) * (count + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		res[j] = make_word(s, start, i);
		if (!res[j])
			return (free_array(res, j));
		j++;
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (ft_alloc(s, c, count_word(s, c)));
}
