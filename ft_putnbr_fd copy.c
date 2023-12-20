/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrovira- <jrovira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 21:28:54 by jrovira-          #+#    #+#             */
/*   Updated: 2023/12/11 19:05:31 by jrovira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

static void	ft_put_positive_nbr(int n, int fd)

{
	char buffer[20];
	int i;

	i = 0;
	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (i > 0)
		write(fd, &buffer[--i], 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
		write(fd, "0", 1);
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_put_positive_nbr(-n, fd);
	}
	else
		ft_put_positive_nbr(n, fd);
}
