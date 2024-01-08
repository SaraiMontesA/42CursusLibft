/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:24:43 by sarmonte          #+#    #+#             */
/*   Updated: 2024/01/08 17:11:07 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Hago un include del libft.h para que me incluya las librerias necesarias
#include "../libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb <= INT_MAX && nb >= INT_MIN)
	{
		if (nb == INT_MIN)
		{
			ft_putchar_fd('-', fd);
			ft_putchar_fd('2', fd);
			ft_putnbr_fd(147483648, fd);
		}
		else if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			ft_putnbr_fd(-nb, fd);
		}
		else if (nb > 9)
		{
			ft_putnbr_fd(nb / 10, fd);
			ft_putnbr_fd(nb % 10, fd);
		}
		else
		{
			ft_putchar_fd(nb + '0', fd);
		}
	}
}
