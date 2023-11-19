/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:22:46 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/19 05:56:00 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (start >= ft_strlen(s))
	{
		str = ft_strdup("");
		return str;
	}
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
/*


#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
    const char *test_string = "hola";

    // Using the custom ft_substr function
    char *result = ft_substr(test_string, 0, 18446744073709551615);

    // Checking and printing the result
    printf("Original String: \"%s\"\n", test_string);
    printf("%s\n", result);

    // Freeing allocated memory
    free(result);

    return 0;
}

*/