/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:04:29 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/07 11:23:38 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		i;
	char	*d;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = 0;
	d = malloc(nmemb * size);
	while ((size_t)i < (nmemb * size))
	{
		d[i] = 0;
		i++;
	}
	return (d);
}
