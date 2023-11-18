/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:52:19 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/18 04:57:07 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;
	size_t		t;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	t = n;
	if (d > s)
	{
		while (t-- > 0)
		{
			d[t] = (char)s[t];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = (char)s[i];
			i++;
		}
	}
	return (dest);
}
