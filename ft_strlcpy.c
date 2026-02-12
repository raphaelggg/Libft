/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragolden <ragolden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:12:58 by ragolden          #+#    #+#             */
/*   Updated: 2025/11/14 12:07:08 by ragolden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;

	i = 0;
	srcsize = ft_strlen(src);
	if (dstsize == 0)
		return (srcsize);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (srcsize);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char	src[] = "Salut ouiBonjour";
	char	dst[10];
	size_t	ret;

	ret = ft_strlcpy(dst, src, sizeof(dst));

	printf("Source : \"%s\"\n", src);
	printf("Destination : \"%s\"\n", dst);
	printf("Taille souhaitee : %zu\n", ret);
	
	return (0);
}*/