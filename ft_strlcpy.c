/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:00:12 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/17 04:26:11 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < size -1 && i < sizeof(dst) - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}



#include <stdio.h>
#include <string.h>

// Assuming you have the declaration of ft_strlcpy here
size_t ft_strlcpy(char *dst, const char *src, size_t size);

int main(void) {
    char src[] = "Hello, World!";
    char dst[20]; // Adjust the size based on your needs

   
    // Using your ft_strlcpy implementation
    size_t your_result = ft_strlcpy(dst, src, 4);
    printf("Your ft_strlcpy: %zu, Result: %s\n", your_result, dst);

    return 0;
}

