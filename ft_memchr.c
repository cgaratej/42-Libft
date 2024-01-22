/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:32:25 by cgaratej          #+#    #+#             */
/*   Updated: 2024/01/19 11:15:49 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ch;
	unsigned char	character;

	i = 0;
	ch = (unsigned char *)s;
	character = (unsigned char)c;
	while (i < n)
	{
		if (ch[i] == character)
			return (&ch[i]);
		i++;
	}
	return (0);
}
