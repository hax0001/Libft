/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hax <hax@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:42:25 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/25 05:26:23 by hax              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*d;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	d = malloc(len + 1);
	if (!d)
		return (NULL);
	ft_memcpy(d, s, len + 1);
	return (d);
}
