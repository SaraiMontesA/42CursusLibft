/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/11/29 17:13:52 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	
	i = 0;

	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
s: Puntero al bloque de memoria que se va a llenar.

c: Valor que se va a establecer en cada byte del bloque de memoria.

n: Número de bytes a llenar.

La función memset establece los primeros nbytes del bloque de memoria 
apuntado por s al valor c.

Devuelve un puntero al bloque de memoria s. 
*/
