/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/12/05 08:49:36 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

void	ft_putendl_fd(char *c, int fd)
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
		write(fd, "\n", 1);
	}
}

/*
La función putendl_fd no es una función estándar en el lenguaje de
programación C.

Es posible que sea una función específica de alguna biblioteca o entorno
de desarrollo particular.

Sin embargo, si estás pensando en una función que imprima una cadena
seguida de un salto de línea en un descriptor de archivo específico
(como un archivo o un socket), puedes lograr esto utilizando la 
función write junto con strlen para obtener la longitud de la cadena.
*/
