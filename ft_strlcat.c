/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:25:04 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/17 04:49:17 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j] != '\0' && i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[j + i] = '\0';
	while (src[j])
	{
		j++;
	}
	return (i + j);
}




#include <stdio.h>
#include <string.h>


int main(void) {
    const char src[] = "World!";


    char your_dst[9] = "Hello, ";

    // Using your strlcat implementation
    size_t your_result = ft_strlcat(your_dst, src, sizeof(your_dst));
    printf("Your strlcat: %zu, Result: %s\n", your_result, your_dst);

    return 0;
}
