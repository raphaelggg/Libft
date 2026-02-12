/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragolden <ragolden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:44:08 by ragolden          #+#    #+#             */
/*   Updated: 2025/11/16 17:10:03 by ragolden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((nbr % 10) + '0', fd);
}

/*#include <stdio.h>

int main(void)
{
	int fd = 1; // stdout

	ft_putnbr_fd(12345, fd);
	ft_putchar_fd('\n', fd);

	ft_putnbr_fd(-6789, fd);
	ft_putchar_fd('\n', fd);

	ft_putnbr_fd(0, fd);
	ft_putchar_fd('\n', fd);

	ft_putnbr_fd(-2147483648, fd);
	ft_putchar_fd('\n', fd);

	return (0);
}*/