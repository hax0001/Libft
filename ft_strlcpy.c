/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:00:12 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/18 02:49:10 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}










#include <stdio.h>
#include <string.h>



int main() {
    // Test strings
    const char *source = "Hello, World!";
    char destination[20];

    // Using the standard library's strlcpy for comparison
    size_t std_result = ft_strlcpy(destination, source, sizeof(destination));
    printf("Standard strlcpy result: %zu, Destination: %s\n", std_result, destination);

    // Using your ft_strlcpy implementation
    char destination_ft[20];
    size_t ft_result = ft_strlcpy(destination_ft, source, sizeof(destination_ft));
    printf("Your ft_strlcpy result: %zu, Destination: %s\n", ft_result, destination_ft);

    // Compare the results
    if (std_result == ft_result && strcmp(destination, destination_ft) == 0) {
        printf("Test passed: Results match!\n");
    } else {
        printf("Test failed: Results do not match.\n");
    }

    return 0;
}
