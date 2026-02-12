/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragolden <ragolden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:48:31 by ragolden          #+#    #+#             */
/*   Updated: 2025/11/11 16:43:57 by ragolden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	unsigned char		oc;

	str = (const unsigned char *)s;
	oc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == oc)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int main()
{
	printf("%s\n", (char *)ft_memchr("Bonjour", 'j', 7));
	return (0);
}*/