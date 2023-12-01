/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@estudiante.42urduliz    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/12/01 23:51:25 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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
La función strncmp es una función en el lenguaje de programación C que
se utiliza para comparar los primeros n caracteres de dos cadenas.

s1: Puntero a la primera cadena.

s2: Puntero a la segunda cadena.

n: Número máximo de caracteres a comparar.

La función strncmp compara los primeros n caracteres de las cadenas s1 y s2.

Devuelve un valor entero menor que, igual o mayor que cero según si s1
es menor que, igual o mayor que s2.

La comparación es sensata a mayúsculas y minúsculas.
*/
