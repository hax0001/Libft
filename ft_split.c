/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:07:02 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/18 04:59:02 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*place(char **strings3, int *string_index, int *j, char *buffer)
{
	int	to_allocate;

	if (*j > 0)
	{
		buffer[*j] = '\0';
		to_allocate = sizeof(char) * (ft_strlen(buffer) + 1);
		strings3[*string_index] = malloc(to_allocate);
		if (!strings3[*string_index])
			return (0);
		ft_memcpy(strings3[*string_index], buffer, sizeof(buffer) + 1);
		*string_index += 1;
		*j = 0;
	}
	return (string_index);
}

int	*check1(char const *s, char c, char *buffer, char **strings2)
{
	int	i;
	int	j;
	int	string_index;
	int	len;
	int	*e;

	i = 0;
	string_index = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		if ((char)s[i] == c)
			i++;
		j = 0;
		while (i < len)
		{
			if ((char)s[i] == c)
				break ;
			buffer[j++] = s[i++];
		}
		e = place(strings2, &string_index, &j, buffer);
	}
	return (e);
}

void	check(char const *s, char c, int *count)
{
	int	i;
	int	old_i;
	int	len;

	i = 0;
	old_i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		if ((char)s[i] == c)
			i++;
		old_i = i;
		while (i < len)
		{
			if ((char)s[i] == c)
				break ;
			i++;
		}
		if (i > old_i)
		*count = *count + 1;
	}
}

char	**mouves(char const *s, char c, char **strings1)
{
	int		*r;
	char	*buffer;
	int		len;

	len = ft_strlen(s);
	buffer = malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);
	r = check1(s, c, buffer, strings1);
	free(buffer);
	strings1[*r] = 0;
	return (strings1);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**strings;

	count = 0;
	if (!*s)
		return (NULL);
	check(s, c, &count);
	strings = (char **)malloc(sizeof(char *) * (count + 1));
	if (!strings)
		return (NULL);
	strings = mouves(s, c, strings);
	return (strings);
}
