/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragolden <ragolden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:25:14 by ragolden          #+#    #+#             */
/*   Updated: 2025/11/16 16:08:17 by ragolden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/*#include <stdio.h>

int main(void)
{
    // sortie standard
    ft_putstr_fd("Salut sur stdout\n", 1);

    // l'erreur standard
    ft_putstr_fd("Salut sur stderr\n", 2);

    // dans un fichier
    int fd = open("test_putstr.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        printf("Erreur open\n");
        return (1);
    }

    ft_putstr_fd("C'est good ca marche\n", fd);

    close(fd);

    return (0);
}*/