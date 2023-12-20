/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrovira- <jrovira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:02:46 by jrovira-          #+#    #+#             */
/*   Updated: 2023/12/09 17:52:28 by jrovira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size = count * size;
	void	*ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, total_size);
	return (ptr);
}
