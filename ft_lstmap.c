/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 01:57:53 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/23 02:31:32 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	size_t	n;
	t_list	*d;
	t_list	*t;

	if (!lst || !f || !del)
		return (NULL);
	n = ft_lstsize(lst);
	d = (t_list *)malloc(sizeof(t_list) * n);
	if (!d)
		return (NULL);
	t = lst;
	while (lst)
	{
		t = lst -> next;
		d = (*f)(lst -> content);
		(*del)(lst -> content);
		free(lst);
		lst = t;
	}
	return (d);
}
