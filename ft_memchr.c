/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:06:21 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/07 09:33:34 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*v;
	int				i;

	v = (unsigned char *)s;
	i = 0;
	while (*v != '\0' && i < (int)n)
	{
		if (*v == (unsigned char)c)
		{
			return (v);
		}
		i++;
		v++;
	}
	v = NULL;
	return (v);
}
