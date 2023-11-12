/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:57:19 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/12 23:01:19 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	nlen(int n)
{
	int	len;

	int len = 0;
	while(n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	unsigned int	len;
	
	len = nlen(n);
	s = (char *)malloc(sizeof(char) * len + 1)
}