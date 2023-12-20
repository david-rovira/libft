/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrovira- <jrovira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:33:07 by jrovira-          #+#    #+#             */
/*   Updated: 2023/11/29 21:34:40 by jrovira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return c + 32;
	}
	return (c);
}
//Esta función verifica si el carácter pasado como argumento está en mayúscula ('A' a 'Z') y, si es así, lo convierte a minúscula sumando 32 en su valor ASCII. Si no es una letra mayúscula, simplemente devuelve el mismo carácter.