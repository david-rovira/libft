	/* ************************************************************************** */
	/*                                                                            */
	/*                                                        :::      ::::::::   */
	/*   ft_split.c                                         :+:      :+:    :+:   */
	/*                                                    +:+ +:+         +:+     */
	/*   By: jrovira- <jrovira-@student.42.fr>          +#+  +:+       +#+        */
	/*                                                +#+#+#+#+#+   +#+           */
	/*   Created: 2023/12/07 20:51:47 by jrovira-          #+#    #+#             */
	/*   Updated: 2023/12/11 19:40:46 by jrovira-         ###   ########.fr       */
	/*                                                                            */
	/* ************************************************************************** */

	#include <stdlib.h>
	#include "libft.h"

	static char	*ft_malloc_word(const char *s, char c, size_t *i)
	{
		size_t	start;
		size_t	end;
		char	*word;

		start = *i;
		while (s[*i] && s[*i] == c)
			(*i)++;
		end = *i;
		while (s[*i] && s[*i] != c)
			(*i)++;
		word = (char *)malloc((*i - start + 1) * sizeof(char));
		if (!word)
			return (NULL);
		ft_strlcpy(word, &s[start], *i - start + 1);
		return (word);
	}

	static char	**ft_allocate_memory(char const *s, char c, size_t w_count)
	{
		char	**result;
		size_t	i;
		size_t	j;

		result = (char **)malloc((w_count + 1) * sizeof(char *));
		if (!result)
			return (NULL);
		i = 0;
		j = 0;
		while (i < w_count)
		{
			result[i] = ft_malloc_word(s, c, &j);
			if (!result[i])
			{
				while (i > 0)
					free(result[i--]);
				free(result);
				return (NULL);
			}
			i++;
		}
		return (result);
	}

	char	**ft_split(char const *s, char c)
	{
		char	**result;
		size_t	w_count;

		if (!s)
			return (NULL);
		w_count = ft_word_count(s, c);
		result = ft_allocate_memory(s, c, w_count);
		if (!result)
			return (NULL);
		result[w_count] = NULL;
		return (result);
	}
