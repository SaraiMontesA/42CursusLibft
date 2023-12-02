/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@estudiante.42urduliz    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/12/02 03:33:13 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*pointer;

	pointer = malloc(element_size * num_elements);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, element_size * num_elements);
	return (pointer);
}

/*
La función calloc en C, que significa "asignación contigua", se utiliza
para asignar dinámicamente un bloque de memoria para un número especificado
de elementos, cada uno de un tamaño específico. A diferencia de malloc,
calloc inicializa el bloque de memoria asignado a ceros. La firma de la
función es la siguiente:

void *calloc(size_t num_elements, size_t element_size)

num_elements: Es el número de elementos que se desea asignar en la memoria.
element_size: Es el tamaño en bytes de cada elemento.
La función calloc devuelve un puntero de tipo void que apunta al primer byte
del bloque de memoria recién asignado. Si la asignación es exitosa, el puntero
no es nulo; De lo contrario, si hay algún error o no hay suficiente espacio de
memoria disponible, se devuelve un puntero nulo (NULL).
*/
