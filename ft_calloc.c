/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:04:29 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/17 00:12:56 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*d;
	size_t	tot;
	
	if (size != 0  && nmemb > SIZE_MAX / size)
		return (NULL);
	tot = nmemb * size;
	d = malloc(tot);
	if (!d)
		return (NULL);
	ft_bzero(d, (nmemb * size));
	return ((void *)d);
}
#include <stdio.h>
#include <stdlib.h>  // for malloc and calloc

// Assuming you have implemented ft_calloc
void *ft_calloc(size_t nmemb, size_t size);

int main() {
    // Test case 1: Allocate and initialize an array of integers
    int *intArray;
    size_t numIntegers = 18446744073709551615;

    printf("Test case 1:\n");
    intArray = (int *)ft_calloc(numIntegers, sizeof(int));

    if (intArray == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Return an error code
    }

    for (size_t i = 0; i < numIntegers; ++i) {
        printf("%d ", intArray[i]);  // The elements should be initialized to 0
    }
    printf("\n");

    free(intArray);  // Don't forget to free the allocated memory

 

    return 0;  // Return success
}

