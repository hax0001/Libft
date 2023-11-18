/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:06:39 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/18 04:57:19 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*v;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	v = (char *)s;
	while (i < n)
	{
		v[i] = c;
		i++;
	}
	return ((void *)v);
}
