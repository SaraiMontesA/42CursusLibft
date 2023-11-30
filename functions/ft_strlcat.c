/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@estudiante.42urduliz    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/11/30 23:39:14 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

void	*ft_strlcat(void *dest, const void *src, size_t n)
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
La función strlcates una función que se utiliza para concatenar cadenas de
manera segura en el lenguaje de programación C.

A diferencia de strcat, strlcatincluye un tamaño máximo y verifica que la
concatenación no exceda ese tamaño para evitar desbordamientos de búfer.

Esta función es especialmente útil para prevenir vulnerabilidades de
desbordamiento de búfer.

dest: Puntero a la cadena de destino donde se realizará la concatenación.

src: Puntero a la cadena fuente que se concatenará a la cadena de destino.

size: Tamaño máximo del búfer de destino, incluido el espacio disponible
para la cadena de destino.

La función strlcatconcatena la cadena srca la cadena dest, asegurándose de
que el tamaño total del resultado no exceda size - 1para dejar espacio para
el carácter nulo de terminación.

Devuelve la longitud total de la cadena que se habría creado si no hubiera
restricciones de tamaño.

Importante destacar que strlcatno finaliza el resultado si el tamaño es cero.

Por lo tanto, se debe garantizar que el búfer de destino sea lo
suficientemente grande para acomodar los datos concatenados y el carácter
nulo de terminación.
*/
