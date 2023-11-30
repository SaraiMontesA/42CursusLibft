/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@estudiante.42urduliz    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/11/30 01:27:56 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*src2;
	unsigned char	*temp;
	unsigned char	*dest2;

	if (!dest && !src)
		return (NULL);
	i = 0;
	src2 = (unsigned char *)src;
	dest2 = (unsigned char *)dest;
	temp = (unsigned char *)dest;
	while (i < len)
	{
		temp[i] = src2[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dest2[i] = temp[i];
		len--;
	}
	return (dest);
}

/*
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_temp;
	unsigned char	*src_temp;

	if (!dst && !src)
		return (NULL);
	dst_temp = (unsigned char *)dst;
	src_temp = (unsigned char *)src;
	if (src_temp < dst_temp && dst_temp < src_temp + len)
		while (len--)
			dst_temp[len] = src_temp[len];
	else
		while (len--)
			*(dst_temp++) = *(src_temp++);
	return (dst);
}
*/


/*
La función memmove es una función en el lenguaje de programación C que se
utiliza para copiar un bloque de memoria desde una ubicación fuente a una
ubicación de destino, incluso si las áreas de memoria se solapan.

dest: Puntero a la ubicación de memoria de destino.

src: Puntero a la ubicación de memoria fuente.

len: Número de bytes a copiar.

La función memmove realiza la copia de los primeros nbytes desde la ubicación
de la memoria fuente (src) a la ubicación de la memoria de destino (dest).

A diferencia de memcpy, memmove maneja correctamente los casos donde las áreas
de memoria fuente y destino se solapan, garantizando una copia segura y correcta.
*/
