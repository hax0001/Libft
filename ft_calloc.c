/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:04:29 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/15 23:20:06 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
/*
void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*d;
	size_t	tot;
	
	if (size == 0 || nmemb == 0 || nmemb > SIZE_MAX / size)
		return (NULL);
	tot = nmemb * size;
	d = (void *)malloc(tot);
	if (!d)
		return (NULL);
	ft_bzero(d, (nmemb * size));
	return ((void *)d);
}
*/
int main()
{

		printf("%d\n", SIZE_MAX + 2);

}

