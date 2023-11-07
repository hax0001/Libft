/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:25:04 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/04 12:23:40 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dst[i] && i < (int)size - 1)
		i++;
	while (src[j] != '\0' && i + j < (int)(size - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i] = '\0';
	while (src[j])
	{
		j++;
	}
	return ((size_t)i + j);
}
