/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragolden <ragolden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:14:58 by ragolden          #+#    #+#             */
/*   Updated: 2025/11/18 15:56:44 by ragolden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*#include <stdio.h>

int main(void)
{
    char *str = "Bonjour 42";

    // stdout
    ft_putendl_fd(str, 1);

    // stderr
    ft_putendl_fd("error msg", 2);

    // fichier
    int fd = open("test_putendl.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        printf("Erreur ouverture fichier\n");
        return (1);
    }
    ft_putendl_fd("All is good", fd);
    close(fd);

    return (0);
}*/