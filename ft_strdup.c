/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:38:12 by cgaratej          #+#    #+#             */
/*   Updated: 2024/01/19 14:21:29 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*cpy;

	i = 0;
	len = ft_strlen(s1);
	cpy = (char *)malloc(sizeof(*s1) * len + 1);
	if (cpy == NULL)
		return (0);
	while (s1[i] != '\0')
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    const char *original = "Hola, Mundo!";
    
    // Duplicar la cadena
    char *duplicate = strdup(original);

    if (duplicate != NULL) {
        // Imprimir la cadena duplicada
        printf("Cadena duplicada: %s\n", duplicate);

        // Liberar la memoria asignada
        free(duplicate);
    } else {
        // Manejar la falla de asignación de memoria
        printf("Error al duplicar la cadena.\n");
    }

    return 0;
}*/