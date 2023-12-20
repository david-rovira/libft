/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrovira- <jrovira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:05:48 by jrovira-          #+#    #+#             */
/*   Updated: 2023/12/11 20:06:13 by jrovira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)

{
	size_t	len;
	char	*dup;

	len = ft_strlen(s1) + 1;
	dup = (char *)malloc(len);
	if (dup == NULL)
	{
		return (NULL);
	}
	ft_memcpy(dup, s1, len);
	return (dup);
}
