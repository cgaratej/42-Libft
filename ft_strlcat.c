/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:29:24 by cgaratej          #+#    #+#             */
/*   Updated: 2024/01/17 16:48:52 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		src_len += size;
	else
		src_len += dest_len;
	while (src[i] != '\0' && (dest_len + 1) < size)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (src_len);
}

/*#include <string.h>
#include <stdio.h>

int main() {

    size_t concatenated_size = 
		strlcat("pqrstuvwxyz", "abcd", 5);

    printf("Tamaño total de la cadena concatenada: %zu\n", concatenated_size);

    return 0;
}*/
