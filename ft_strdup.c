/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragolden <ragolden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:49:42 by ragolden          #+#    #+#             */
/*   Updated: 2025/11/18 16:02:14 by ragolden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*new_s1;

	i = 0;
	len = ft_strlen(s1);
	new_s1 = (char *)malloc(len + 1);
	if (!new_s1)
		return (NULL);
	while (s1[i])
	{
		new_s1[i] = s1[i];
		i++;
	}
	new_s1[i] = '\0';
	return (new_s1);
}

/*#include <stdio.h>

int main()
{
	char	*dup = ft_strdup("Bonjour");
	printf("%s\n", dup);
	free(dup);
	return (0);
}*/