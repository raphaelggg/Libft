/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragolden <ragolden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:01:52 by ragolden          #+#    #+#             */
/*   Updated: 2025/11/07 15:04:34 by ragolden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_isdigit('u'));
	printf("%d\n", ft_isdigit('6'));
	printf("%d\n", ft_isdigit('U'));
	printf("%d\n", ft_isdigit('u'));
}*/