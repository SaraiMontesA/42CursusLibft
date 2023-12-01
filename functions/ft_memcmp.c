/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@estudiante.42urduliz    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/12/02 00:30:10 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

//void	*ft_memcpy(void *dest, const void *src, size_t n)
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}

/*
La función memcmp es una función en el lenguaje de programación C que
se utiliza para comparar dos bloques de memoria byte a byte.

int memcmp(const void *s1, const void *s2, size_t n);

s1: Puntero al primer bloque de memoria.

s2: Puntero al segundo bloque de memoria.

n: Número de bytes a comparar.

La función memcmpcompara los primeros nbytes de los bloques de memoria
apuntados por s1y s2.

Devuelve un valor entero menor que, igual a, o mayor que cero si el
bloque de memoria apuntado por s1es menor que, igual a, o mayor que
el bloque de memoria apuntado por s2. 
*/
