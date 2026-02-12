/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragolden <ragolden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:28:09 by ragolden          #+#    #+#             */
/*   Updated: 2025/11/14 12:07:22 by ragolden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len_total;
	char	*res;

	i = -1;
	j = 0;
	len_total = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * len_total + 1);
	if (!res)
		return (NULL);
	while (s1[++i])
	{
		res[j++] = s1[i];
	}
	i = -1;
	while (s2[++i])
	{
		res[j++] = s2[i];
	}
	res[j] = '\0';
	return (res);
}

/*#include <stdio.h>

int main()
{
	char	s1[] = "Bonjour";
	char	s2[] = " les amis";
	printf("%s", ft_strjoin(s1, s2));
	return (0);
}*/