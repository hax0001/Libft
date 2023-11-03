/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:32:53 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/03 21:42:56 by nait-bou         ###   ########.fr       */
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
	if (str[i] >= 48 && str[i] <= 57 || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			j = (-1);
			i++;
		}
		while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
		{
			r = (r * 10) + str[i] - 48;
			i++;
		}
		return (r * j);
	}
	else
		return (0);
}	
