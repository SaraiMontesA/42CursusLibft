/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/12/05 08:48:01 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

size_t	ft_strlen( const char *s)
{
	size_t	x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
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