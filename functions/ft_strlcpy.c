/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/12/11 11:27:42 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t len)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = ft_strlen(src);
	if (len > 0)
	{
		while (src[i] && i < len - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}

/*
	devuelve un size_t y la llamo ft_strlen

	size_t	ft_strlen( const char *s) //Creo una función que pide como 
										dato un puntero a un char,
	{	
		size_t	x; // Declaro una variable de tipo size_t y la llamo x
	
		x = 0; // Guardo un 0 en la variable x	
		while (s[x] != '\0') // Mientras la posición x del string s no sea \0
		{
			x++; // Sumo 1 a x
		}
		return (x); // Devuelvo al valor de x
	}	
*/