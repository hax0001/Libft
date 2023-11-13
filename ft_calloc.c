/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:04:29 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/13 12:10:24 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		i;
	char	*d;

	i = 0;
	d = (void *)malloc(nmemb * size);
	if (!d)
		return (NULL);
	while ((size_t)i < (nmemb * size))
	{
		d[i] = 0;
		i++;
	}
	return ((void *)d);
}
