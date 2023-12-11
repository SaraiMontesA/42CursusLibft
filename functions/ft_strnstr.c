/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/12/11 12:11:51 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while ((i < n - 1) && str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	if (n > 0)
		return (str1[i] - str2[i]);
	else
		return (0);
}

/*
La función strnstr no es parte de la biblioteca estándar del
lenguaje de programación C.

Sin embargo, existe una función similar llamada strcasestr que se
encuentra en algunas implementaciones, como glibc.

		#define _GNU_SOURCE
		#include <string.h>

		char *strcasestr(const char *haystack, const char *needle);

haystack: Puntero a la cadena en la que buscar.

needlehaystack: Puntero a la cadena que se busca en haystack.

La función strcasestrbusca la primera aparición de la subcadena
needleen la cadena haystack, de manera insensible a mayúsculas y minúsculas.

Devuelve un puntero al comienzo de la primera coincidencia o NULLsi no se
encuentra ninguna coincidencia.

Tenga en cuenta que strcasestrpuede no estar presente en todas las
implementaciones de C, ya que no es parte del estándar C.

Su disponibilidad puede depender del compilador y del
sistema operativo que estés utilizando.
*/
