/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:22:46 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/07 13:36:54 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*d;

	d = malloc(len);
	if (!d)
		return (0);
	while (i < (int)len)
	{
		d[i] = (char)s[start + i];
		i++;
	}
	return (d);
}
