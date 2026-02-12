/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragolden <ragolden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:56:59 by ragolden          #+#    #+#             */
/*   Updated: 2025/11/14 12:07:15 by ragolden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[i] && (dst_len + i < dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len < dstsize)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char	dst[15] = "Salut";
	char	src[] = "Monde";
	size_t	ret;

	ret = ft_strlcat(dst, src, sizeof(dst));
	
	printf("Destination apres concatenation : \"%s\"\n", dst);
	printf("Taille souhaitee : %zu\n", ret);
	
	return (0);
}*/