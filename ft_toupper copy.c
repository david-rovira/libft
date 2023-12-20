/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrovira- <jrovira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:24:03 by jrovira-          #+#    #+#             */
/*   Updated: 2023/11/29 21:25:18 by jrovira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c - 32;
	}
	return (c);
}
//Esta función verifica si el carácter pasado como argumento está en minúscula ('a' a 'z') y, si es así, lo convierte a mayúscula restando 32 en su valor ASCII. Si no es una letra minúscula, simplemente devuelve el mismo carácter.