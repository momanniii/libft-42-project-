/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalmoma <abalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 07:19:39 by abalmoma          #+#    #+#             */
/*   Updated: 2026/09/28 15:09:09 by abalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
void	*f(void	*s)
{
	char *c = (char *)s;
	c[0] = 'A';
	return(c);
}
void	del(void	*content)
{
	free(content);
}
#include <stdio.h>
int main()
{
	t_list	*a;
	t_list	*res;
	a = ft_lstnew(ft_strdup("momany"));
	res = ft_lstmap(a, f, del);
	printf("%s\n", (char *)res->content);
}
