/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hax <hax@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 02:11:46 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/25 05:33:22 by hax              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	s1_len;
	size_t	i;
	size_t	j;

	if (!s1)
		return (NULL);
	s1_len = ft_strlen(s1);
	i = 0;
	j = s1_len;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (i < j && ft_strchr(set, s1[j]) != NULL)
		j--;
	new_str = (char *)malloc((j - i + 2) * sizeof(char));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1 + i, j - i + 2);
	return (new_str);
}
