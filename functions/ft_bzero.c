/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@estudiante.42urduliz    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/12/02 01:06:53 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

/*
La función bzeroen C se utiliza para establecer todos los bytes de un bloque
de memoria a cero. Es similar a memset, pero específicamente diseñado para
establecer a cero bytes de memoria. La firma de la función es la siguiente:

void bzero(void *s, size_t n);

s: Puntero al bloque de memoria que se establecerá en cero.

ns: Número de bytes a establecer en cero,
comenzando desde la posición del puntero.

La función bzero es menos común y ha sido marcada como
obsoleta a favor de memset en algunos sistemas.

La función memset proporciona funcionalidad similar y
es más ampliamente utilizada. 
*/
