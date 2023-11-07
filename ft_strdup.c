/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:42:25 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/07 12:09:02 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*d;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	d = malloc(i);
	if (!d)
		return (NULL);
	while (j < i)
	{
		d[j] = (char)s[j];
		j++;
	}
	return (d);
}
