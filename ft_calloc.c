/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:39:32 by cgaratej          #+#    #+#             */
/*   Updated: 2024/01/18 17:37:21 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}

/*#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    // Calcular el tamaño total de memoria requerido
    //size_t total_size = num_elements * element_size;

    // Asignar un bloque de memoria para 5 enteros
    int *arr = (int *)ft_calloc(num_elements, element_size);

    if (arr != NULL) {
        // Acceder y mostrar el contenido del bloque asignado
        for (size_t i = 0; i < num_elements; i++) {
            printf("arr[%zu] = %d\n", i, arr[i]);
        }

        // Liberar la memoria asignada
        free(arr);
    } else {
        // Manejar la falla de asignación de memoria
        printf("Error al asignar memoria.\n");
    }

    return 0;
}*/