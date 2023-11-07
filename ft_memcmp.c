/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:22:32 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/07 09:27:58 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*v1;
	const unsigned char	*v2;
	int					i;

	v1 = (const unsigned char *)s1;
	v2 = (const unsigned char *)s2;
	i = 0;
	while (i < (int)n)
	{
		if (v1[i] != v2[i])
		{
			return ((int)v1[i] - (int)v2[i]);
		}
		i++;
	}
	return (0);
}
