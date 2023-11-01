/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:06:39 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/01 18:24:40 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memset(void *s, int c, size_t n) {
    unsigned char *p = s;
    unsigned char uc = c;

    while (n-- > 0) {
        *p++ = uc;
    }

    return s;
}
#include <stdio.h>

int main() 
{
    char str[] = "This is a test string.";
    int n = 10; // Number of characters to set
    char ch = '*';

    // Print the original string
    printf("Original string: %s\n", str);

    // Use memset() to set 'n' characters to 'ch' in the string
    ft_memset(str + 5, ch, n);

    // Print the modified string
    printf("Modified string: %s\n", str);

    return 0;
}