/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:41:02 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/02 22:07:01 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdd

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && little[i] != '\0' && len != 0 && i < (int)len)
	{
		if (big[i] == little[i])
			return ((char)little[i]);
		i++;
	}
	return (NULL);
}
