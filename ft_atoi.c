/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:32:53 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/17 03:56:55 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	r;

	i = 0;
	j = 1;
	r = 0;
	if (str)
	{
		while((str[i] >= 9 && str[i] <= 13) || str[i] == '+' || str[i] == '-' || str[i] == 32)
		{
			if (str[i] == '-')
			{
				j = (-1);
			}
			i++;
		}
		while (str[i] >= 48 && str[i] <= 57)
		{
			r = (r * 10) + str[i] - 48;
			i++;
		}
		return (r * j);
	}
	else
		return (0);
}



#include <stdio.h>
#include <stdlib.h>

// Assuming ft_atoi is declared and defined
int ft_atoi(const char *str);

int main(void)
{
    const char *test_string = "   999999999999999999999999999999";
    int result = ft_atoi(test_string);

    printf("Input: \"%s\"\n", test_string);
    printf("Result: %d\n", result);
    printf("Result: %d\n", atoi(test_string));

    return 0;
}
