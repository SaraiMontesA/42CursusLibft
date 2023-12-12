/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/12/11 11:27:23 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

/* 15 - ft_strchr - devuelve un puntero a la primera aparición del caracter c
	en la cadena s. 														  */

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*str1;
	char	char_c;

	len = ft_strlen(s);
	str1 = (char *)s;
	char_c = c;
	if (c == '\0')
		return (str1 + len);
	while (len >= 0)
	{
		if (str1[len] == char_c)
			return (str1 + len);
		len--;
	}
	if (s[0] == char_c)
		return (str1);
	return (0);
}

/*
La función strchr es una función en el lenguaje de programación C que se
utiliza para buscar la primera ocurrencia de un carácter específico
en una cadena de caracteres.

s: Puntero a la cadena de caracteres en la que se va a realizar la búsqueda.

c: Valor del carácter que se va a buscar en la cadena.

La función strchrdevuelve un puntero al primer carácter encontrado en la
cadena sque coincide con c.

Si el carácter no se encuentra, la función devuelve un puntero nulo ( NULL).

Ejemplo de uso:
*/
