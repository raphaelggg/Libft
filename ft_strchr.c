/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragolden <ragolden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:26:54 by ragolden          #+#    #+#             */
/*   Updated: 2025/11/13 14:40:40 by ragolden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != (unsigned char)c && s[i])
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)s + i);
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	char 	*str1 = "dommage";
	char	tofind = 'o';
	char *res;

	res = ft_strchr(str1, tofind);
	if (res != NULL)
		printf("Caractere '%c' trouve : \"%s\"\n", tofind, res);
	else
		printf("Caractere '%c' non trouve : \n", tofind);
	return (0);

}*/