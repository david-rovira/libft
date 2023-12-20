/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrovira- <jrovira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:53:44 by jrovira-          #+#    #+#             */
/*   Updated: 2023/12/14 17:56:39 by jrovira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t s_len = 0;
	while (s[s_len])
		s_len++;
	if (start >= s_len)
	{
		return (malloc(1));
	}
	if (len > s_len - start)
	{
		len = s_len - start;
	}
	char *substr = malloc((len + 1) * sizeof(char));
	if (!substr)
	{
		return (NULL);
	}
	for (size_t i=0; i < len; i++)
	{
		substr[i] = s[start+i];
	}
	substr[len] = '\0';
	return (substr);
}