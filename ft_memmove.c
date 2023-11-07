/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:52:19 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/07 10:16:15 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	int					i;
	int					t;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	t = (int)n;
	if (d > s)
	{
		while (t-- > 0)
		{
			d[t] = (unsigned char)s[t];
		}
	}
	else
	{
		while (i < (int)n)
		{
			d[i] = (unsigned char)s[i];
			i++;
		}
	}
	return (dest);
}
