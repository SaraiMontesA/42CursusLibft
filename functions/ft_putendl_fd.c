/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2023/11/29 16:31:12 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

void	ft_putendl_fd(char *c, int fd)
{
	int i;
	
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
