/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:21:37 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/18 04:59:35 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		t;
	int		n;
	char	*d;

	i = 0;
	t = 0;
	n = 0;
	while (s1[i++])
		n++;
	i = 0;
	while (s2[i++])
		n++;
	i = 0;
	d = malloc(n);
	if (!d)
		return (NULL);
	while (s1[i] != '\0' && t < (n))
		d[t++] = s1[i++];
	i = 0;
	while (s2[i] != '\0' && t < (n))
		d[t++] = s2[i++];
	return (d);
}
