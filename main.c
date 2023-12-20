/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrovira- <jrovira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:07:57 by jrovira-          #+#    #+#             */
/*   Updated: 2023/11/29 19:31:19 by jrovira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main() 
{
	char c = 'a';
	if (ft_isalpha(c))
	{
		printf("%c es una letra.\n", c);
	}
	else
	{
		printf("%c no es una letra.\n", c);
	}
	return (0);
}
