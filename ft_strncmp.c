/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragolden <ragolden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:46:00 by ragolden          #+#    #+#             */
/*   Updated: 2025/11/11 16:56:05 by ragolden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int main()
{
	printf("TEST 1 : %d\n", ft_strncmp("Salut", "Salut", 5));
	printf("TEST 2 : %d\n", ft_strncmp("Salut", "Saluz", 5));
	printf("TEST 3 : %d\n", ft_strncmp("Saluz", "Salut", 5));
	printf("TEST 4 : %d\n", ft_strncmp("Salut", "SalutMonde", 10));
}*/