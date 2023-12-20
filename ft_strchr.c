/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrovira- <jrovira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:35:52 by jrovira-          #+#    #+#             */
/*   Updated: 2023/12/11 19:44:51 by jrovira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)

{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return (char *s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return (char *s);
	}
	return (NULL);
}
