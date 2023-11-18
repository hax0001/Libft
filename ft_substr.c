/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:22:46 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/13 12:26:06 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;

	if (!s)
		return (0);
	d = (char *)malloc(len + 1 * sizeof(*s));
	if (!d)
		return (0);
	ft_strlcpy(d, s + start, len + 1);
	return (d);
}
