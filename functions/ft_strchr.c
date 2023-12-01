/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/12/01 11:44:10 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

/* 15 - ft_strchr - devuelve un puntero a la primera aparición del caracter c
	en la cadena s. 														  */
	
char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str1;
	char	char_c;

	i = 0;
	str1 = (char *)s;
	char_c = c;
	
	while (str1[i] != char_c)
	{
		if (str1[i] == '\0')
			return (NULL);
		i++;		
	}
	return ((char *)str1 + i);
}

/*
La función strchr es una función en el lenguaje de programación C que se
utiliza para buscar la primera ocurrencia de un carácter específico
en una cadena de caracteres.

s: Puntero a la cadena de caracteres en la que se va a realizar la búsqueda.

c: Valor del carácter que se va a buscar en la cadena.

La función strchrdevuelve un puntero al primer carácter encontrado en la
cadena sque coincide con c.

Si el carácter no se encuentra, la función devuelve un puntero nulo ( NULL).

Ejemplo de uso:
*/
