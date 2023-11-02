/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:50:32 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/02 18:37:32 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*t;

	t = NULL;
	while (*s)
	{
		if (*s == (const char)c)
			t = s;
		s++;
	}
	if (c == '\0')
		t = s;
	return ((char *)t);
}
