/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:03:31 by cgaratej          #+#    #+#             */
/*   Updated: 2024/01/11 15:54:45 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int value, size_t len)
{
	int				i;
	unsigned char	*c;

	i = 0;
	c = (unsigned char *)str;
	while (len > 0)
	{
		c[i] = value;
		i++;
		len--;
	}
	return (str);
}
