/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:25:03 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/14 15:23:15 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*c;
	int		i;

	i = 0;
	c = ft_itoa(n);
	while (c[i])
		write(fd, &c[i++], sizeof(char));
}
