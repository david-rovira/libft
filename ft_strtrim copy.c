/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrovira- <jrovira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 20:20:35 by jrovira-          #+#    #+#             */
/*   Updated: 2023/12/14 17:48:23 by jrovira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> 
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	new_len;
	char	*trimmed_str;
	size_t	i;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_is_in_set(s1[start], set))
		start++;
	while (end > start && ft_is_in_set(s1[end - 1], set))
		end--;
	new_len = end - start;
	trimmed_str = (char *)malloc((new_len + 1) * sizeof(char));
	if (!trimmed_str)
		return (NULL);
	i = 0;
	while (i < new_len)
	{
		trimmed_str[i] = s1[start + i];
		i++;
	}
	trimmed_str[new_len] = '\0';
	return (trimmed_str);
}
