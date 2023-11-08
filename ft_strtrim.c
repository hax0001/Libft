/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:49:06 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/08 13:52:14 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*p;

	p = NULL;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = strlen(s1);
		while (s1[i] && strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && strchr(set, s1[j - 1]) && j > i)
			j--;
		p = malloc(j - i + 1);
		if (p)
			strncpy(p, &s1[i], j - i + 1);
	}
	return (p);
}
