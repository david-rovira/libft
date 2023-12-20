/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrovira- <jrovira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:45:56 by jrovira-          #+#    #+#             */
/*   Updated: 2023/12/09 19:18:05 by jrovira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*p = (const unsigned char *)s;

	while (n--)
	{
		if (*p == (unsigned char)c)
		{
			return (void *p);
		}
		p++;
	}
	return (NULL);
}
