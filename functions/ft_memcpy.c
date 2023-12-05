/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/12/05 08:49:49 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*src2;
	unsigned char		*dest2;

	i = 0;
	src2 = src;
	dest2 = dest;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}

/*
La función memcpy es una función en el lenguaje de programación C que se
utiliza para copiar un bloque de memoria desde una ubicación fuente a una
ubicación de destino. 

dest: Puntero a la ubicación de memoria de destino.

src: Puntero a la ubicación de memoria fuente.

n: Número de bytes a copiar.

La función memcpycopia los primeros nbytes desde la ubicación de la memoria
fuente ( src) a la ubicación de la memoria de destino ( dest).

Devuelve un puntero a la ubicación de memoria de destino.
*/
