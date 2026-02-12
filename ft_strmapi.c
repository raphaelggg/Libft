/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragolden <ragolden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:36:11 by ragolden          #+#    #+#             */
/*   Updated: 2025/11/15 18:16:46 by ragolden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*new;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s) + 1;
	new = (char *)malloc(sizeof(char) * len);
	if (!new)
		return (NULL);
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*#include <stdio.h>


char upper(unsigned int i, char c)
{
    (void)i;//volontairement inutilise pour eviter lerreur -Werror
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

int main(void)
{
    char *s = "salut Raph";
    char *result;

    result = ft_strmapi(s, upper);
    if (!result)
    {
        printf("Erreur malloc ou paramètres invalides\n");
        return 1;
    }

    printf("Original : %s\n", s);
    printf("Transformé : %s\n", result);

    free(result); // Toujours libérer la mémoire
    return 0;
}*/