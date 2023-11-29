/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@estudiante.42urduliz    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/11/29 22:17:38 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

void	*ft_memcpy(const void *s, int c, size_t n)
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
La función memcpyes una función en el lenguaje de programación C que se
utiliza para copiar un bloque de memoria desde una ubicación fuente a una
ubicación de destino. 

dest: Puntero a la ubicación de memoria de destino.

src: Puntero a la ubicación de memoria fuente.

n: Número de bytes a copiar.

La función memcpycopia los primeros nbytes desde la ubicación de la memoria
fuente ( src) a la ubicación de la memoria de destino ( dest).

Devuelve un puntero a la ubicación de memoria de destino.
*/
