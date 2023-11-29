/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/11/29 17:20:10 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t i;
	
	i = 0;

	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

/*
s: Puntero al bloque de memoria que se establecerá en cero.

ns: Número de bytes a establecer en cero,
comenzando desde la posición del puntero.

La función bzero es menos común y ha sido marcada como
obsoleta a favor de memset en algunos sistemas.

La función memset proporciona funcionalidad similar y
es más ampliamente utilizada. 
*/
