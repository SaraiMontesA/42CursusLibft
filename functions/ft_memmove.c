/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@estudiante.42urduliz    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/12/01 23:51:02 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*src2;
	unsigned char	*dest2;

	if (!dest && !src)
		return (NULL);
	src2 = (unsigned char *)src;
	dest2 = (unsigned char *)dest;
	if (src2 < dest2 && dest2 < src2 + len)
	{
		while (len--)
		{
			dest2[len] = src2[len];
		}
	}
	else
	{
		while (len--)
		{
			*(dest2++) = *(src2++);
		}
	}
	return (dest);
}

/*
La función memmove es una función en el lenguaje de programación C que se
utiliza para copiar un bloque de memoria desde una ubicación fuente a una
ubicación de destino, incluso si las áreas de memoria se solapan.

dest: Puntero a la ubicación de memoria de destino.

src: Puntero a la ubicación de memoria fuente.

len: Número de bytes a copiar.

La función memmove realiza la copia de los primeros nbytes desde la ubicación
de la memoria fuente (src) a la ubicación de la memoria de destino (dest).

A diferencia de memcpy, memmove maneja correctamente los casos donde las áreas
de memoria fuente y destino se solapan, garantizando una copia segura y correcta.
*/
