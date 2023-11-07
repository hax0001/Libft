/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:41:02 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/07 09:44:08 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && len != 0 && i < (int)len)
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && i + j < (int)len)
			{
				if (little[j + 1] == '\0')
					return ((char *)big + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
