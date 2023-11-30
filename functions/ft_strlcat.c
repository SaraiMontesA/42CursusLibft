/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@estudiante.42urduliz    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/12/01 00:18:36 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srci;
	size_t	desti;

	desti = 0;
	srci = 0;
	if (size > 0)
	{
		while (desti < size - 1)
		{
			//while (src[srci] != '\0')
			//{
			//}
				dest[desti] = src[srci];
				srci++;
			desti++;
		}

		/*
		while (desti < size)
		{
			desti++;
		}
		
		*/

			dest[desti] = '\0';
	}
	return (desti);
}

/*
La función strlcat es una función que se utiliza para concatenar cadenas de
manera segura en el lenguaje de programación C.

A diferencia de strcat, strlcat incluye un tamaño máximo y verifica que la
concatenación no exceda ese tamaño para evitar desbordamientos de búfer.

Esta función es especialmente útil para prevenir vulnerabilidades de
desbordamiento de búfer.

dest: Puntero a la cadena de destino donde se realizará la concatenación.

src: Puntero a la cadena fuente que se concatenará a la cadena de destino.

size: Tamaño máximo del búfer de destino, incluido el espacio disponible
para la cadena de destino.

La función strlcat concatena la cadena srca la cadena dest, asegurándose de
que el tamaño total del resultado no exceda size - 1 para dejar espacio para
el carácter nulo de terminación.

Devuelve la longitud total de la cadena que se habría creado si no hubiera
restricciones de tamaño.

Importante destacar que strlcatno finaliza el resultado si el tamaño es cero.

Por lo tanto, se debe garantizar que el búfer de destino sea lo
suficientemente grande para acomodar los datos concatenados y el carácter
nulo de terminación.
*/
