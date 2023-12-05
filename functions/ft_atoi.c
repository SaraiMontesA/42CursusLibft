/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/12/05 14:19:55 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

int	ft_atoi(const char *str)
{
	long int	result;
	long int	sign;
	int			i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if ((str[i] == '-' ) && ft_isdigit(str[i +1]))
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (int)(str[i] - '0');
		if (result * sign > 2147483647)
			return (-1);
		if (result * sign < -2147483648)
			return (0);
		i++;
	}
	return (result * sign);
}

/*
La función atoi(ASCII to Integer) es una función estándar en C que
convierte una cadena de caracteres que representa un número entero
en su equivalente en formato entero.

Aquí está la firma típica de la función:


int atoi(const char *str);

str: Puntero a una cadena de caracteres que representa el número
que se va a convertir.

La función atoi analiza la cadena de caracteres especificada por
str e interpreta su contenido como un número entero.

Ignora los espacios iniciales en blanco y detiene la conversión
cuando encuentra el primer carácter no numérico.







En este ejemplo, atoiconvierte la cadena "12345"en el entero 12345.

Ten en cuenta que atoi no maneja errores, por lo que si la cadena
no es un número válido, el resultado puede ser impredecible.

En situaciones donde es importante manejar posibles errores, se
pueden usar funciones más avanzadas como strtol.
*/
