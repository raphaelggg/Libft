/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragolden <ragolden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:57:06 by ragolden          #+#    #+#             */
/*   Updated: 2025/11/11 16:43:45 by ragolden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*t_ptr;

	i = 0;
	t_ptr = malloc(count * size);
	if (!t_ptr)
		return (NULL);
	while (i < count * size)
	{
		t_ptr[i] = 0;
		i++;
	}
	return (t_ptr);
}

/*#include <stdio.h>

int main()
{
	int *tab = ft_calloc(5, sizeof(int));
	for (int i = 0; i < 5; i++)
		printf("%d ", tab[i]);
	printf("\n");
	free(tab);
	return (0);
}*/