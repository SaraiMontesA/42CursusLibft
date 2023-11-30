/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/11/30 10:32:51 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

void	*ft_memcmp(const void *s, int c, size_t n)
{
	const unsigned char	*pointer;
	size_t				i;

	i = 0;
	pointer = (unsigned char *)(s);
	while (n > i)
	{
		if (pointer[i] == ((unsigned char)c))
		{
			return ((void *)&pointer[i]);
		}
		i++;
	}
	return (NULL);
}

/*
s: Puntero a la memoria donde se realizará la búsqueda.

c: Valor entero que se está buscando.

n: Número de bytes a buscar.

La función memchr busca el byte con el valor c
dentro de los primeros nbytes de la memoria apuntada por s.

Devuelve un puntero al primer byte encontrado o 
NULL si el byte no está presente en los primeros nbytes. 
*/
