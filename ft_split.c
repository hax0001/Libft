/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:07:02 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/17 02:01:29 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int	*place(char **strings3, int *string_index, int *j, char *buffer)
{
	int	to_allocate;

	if (*j > 0)
	{
		buffer[*j] = '\0';
		to_allocate = sizeof(char) * (strlen(buffer) + 1);
		strings3[*string_index] = malloc(to_allocate);
		if (!strings3[*string_index])
			return (0);
		strcpy(strings3[*string_index], buffer);
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
	len = strlen(s);
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
	len = strlen(s);
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

	len = strlen(s);
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






#include <stdio.h>
#include <stdlib.h>

// Assuming ft_split is declared and defined
char	**ft_split(char const *s, char c);

// Function to free the memory allocated for the array of strings
void	free_split_result(char **split_result)
{
	int i;

	i = 0;
	while (split_result[i])
	{
		free(split_result[i]);
		i++;
	}
	free(split_result);
}

int main(void)
{
	char *input_string = "aymedfgdg  dssgd";
	char delimiter = '0';
	char **result;

	// Using ft_split to split the string
	result = ft_split(input_string, delimiter);

	if (!result)
	{
		// Handle memory allocation failure
		fprintf(stderr, "Memory allocation error\n");
		return 1;
	}

	// Printing the result
	int i = 0;
	while (result[i])
	{
		printf("Token %d: %s\n", i + 1, result[i]);
		i++;
	}

	// Freeing the allocated memory
	free_split_result(result);

	return 0;
}

