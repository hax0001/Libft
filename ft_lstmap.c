/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 01:57:53 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/23 06:37:23 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*d;
	t_list	*t;

	if (!lst || !f || !del)
		return (NULL);
	d = (t_list *)malloc(sizeof(t_list));
	if (!d)
		return (NULL);
	d -> content = f(lst -> content);
	t = d;
	lst = lst -> next;
	while (lst -> next)
	{
		t = lst -> next;
		t -> next = ft_lstnew((*f)(lst -> content));
		t = t -> next;
		lst = lst -> next;
	}
	t -> next = NULL;
	return (d);
}
