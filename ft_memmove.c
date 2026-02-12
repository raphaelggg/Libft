/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragolden <ragolden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:02:49 by ragolden          #+#    #+#             */
/*   Updated: 2025/11/18 15:55:42 by ragolden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (n--)
	{
		if (ptr_dst < ptr_src)
			*ptr_dst++ = *ptr_src++;
		else
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	}
	return (dst);
}

/*#include <stdio.h>

int main()
{
	char	str1[] = "Salut Monde";
	char	str2[] = "Salut Monde";

	printf("Avant memmove :\n");
	printf("str1 = \"%s\"\n", str1);
	
	ft_memmove(str1 + 6, str1, 5);
	printf("\nApres ft_memmove(str1 + 6, str1, 5) :\n");
	printf("str1 = \"%s\"\n", str1);

	ft_memmove(str2 + 6, str2, 5);
	printf("\nApres ft_memmove(str2 + 6, str2, 5) :\n");
	printf("str2 = \"%s\"\n", str2);
}*/