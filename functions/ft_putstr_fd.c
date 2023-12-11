/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/12/11 11:27:54 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

void	ft_putstr_fd(char *c, int fd)
{
	int	i;

	i = 0;
	if (c)
	{
		while (c[i] != '\0')
		{
			write(fd, &c[i], 1);
			i++;
		}
	}
}

/*
La función putstr_fd no es una función estándar en el lenguaje de
programación C.

Puede ser una función específica de alguna biblioteca o entorno de
desarrollo particular.

Si necesitas imprimir una cadena seguida de un salto de línea en
un descriptor de archivo específico (como un archivo o un socket),
puedes crear tu propia función para lograrlo.
*/
