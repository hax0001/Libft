/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:47:41 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/18 01:57:54 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*v1;
	unsigned char	*v2;
	

	i = 0;
	v1 = (unsigned char *)s1;
	v2 = (unsigned char *)s2;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (v1[i] == v2[i])
			i++;
		else
			return (v1[i] - v2[i]);
	}
	if ((s1[i] == '\0' || s2[i] == '\0') && i < n)
	{
		return (v1[i] - v2[i]);
	}
	return (0);
}
